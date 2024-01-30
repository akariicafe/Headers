@class NSString;

@interface BWInferenceSingleBufferPoolProvider : NSObject <BWInferencePixelBufferPoolProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)a0 format:(id)a1;

@end
