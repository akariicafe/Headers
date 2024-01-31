@interface AVPlayerViewControllerConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long excludedControls;

+ (id)defaultConfiguration;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
