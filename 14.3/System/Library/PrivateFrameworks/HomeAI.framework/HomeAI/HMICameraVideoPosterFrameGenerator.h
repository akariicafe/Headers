@class NSArray, NSString, HMICameraVideoPosterFrameGeneratorInput, NSMutableArray;

@interface HMICameraVideoPosterFrameGenerator : HMFObject <HMFLogging>

@property (retain) NSMutableArray *posterFramesInternal;
@property (readonly) HMICameraVideoPosterFrameGeneratorInput *input;
@property (readonly) NSArray *posterFrames;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } nextGenerationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithInput:(id)a0;
- (void)startHandlingFrames;
- (BOOL)willHandleFramesFromVideoResource:(id)a0;
- (BOOL)handleVideoFrame:(id)a0 error:(id *)a1;
- (BOOL)saveAsPosterFrame:(id)a0 error:(id *)a1;

@end
