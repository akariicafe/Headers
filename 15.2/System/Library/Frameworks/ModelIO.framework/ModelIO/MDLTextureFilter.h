@interface MDLTextureFilter : NSObject

@property (nonatomic) unsigned long long sWrapMode;
@property (nonatomic) unsigned long long tWrapMode;
@property (nonatomic) unsigned long long rWrapMode;
@property (nonatomic) unsigned long long minFilter;
@property (nonatomic) unsigned long long magFilter;
@property (nonatomic) unsigned long long mipFilter;

- (id)init;

@end
