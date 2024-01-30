@class NSDictionary;

@interface SCNMaterialAttachment : NSObject

@property (nonatomic) unsigned int glID;
@property (nonatomic) unsigned int target;
@property (nonatomic) void *context;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSDictionary *options;

+ (id)materialAttachmentWithGLKTextureInfo:(id)a0;

- (void)dealloc;

@end
