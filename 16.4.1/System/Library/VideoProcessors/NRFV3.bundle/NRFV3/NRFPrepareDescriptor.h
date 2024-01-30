@interface NRFPrepareDescriptor : NSObject

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) BOOL allowModifyingInputBuffers;

- (id)init;
- (id)description;

@end
