@class NSData, NSString;
@protocol CVAPortraitVideoPipeline;

@interface CVAPortraitGenericRequestCubeImpl : NSObject <CVAPortraitGenericRequest>

@property (retain) id<CVAPortraitVideoPipeline> portraitVideoPipeline;
@property struct __CVBuffer { } *sourceColorPixelBuffer;
@property (retain) NSData *cubeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
