@class NSString;
@protocol SNMLModel;

@interface SNSoundPrintFeatureExtractorConfiguration : NSObject <SNProcessorCreating>

@property (readonly) id<SNMLModel> model;
@property (readonly) double sampleRate;
@property (readonly) unsigned int windowLengthFrames;
@property (readonly) unsigned int stepSizeFrames;
@property (readonly) unsigned int outputFeatureSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSoundPrintFeatureExtractorConfiguration:(id)a0;
- (id)createProcessorWithError:(id *)a0;
- (id)initWithModel:(id)a0 overlapFactor:(double)a1;

@end
