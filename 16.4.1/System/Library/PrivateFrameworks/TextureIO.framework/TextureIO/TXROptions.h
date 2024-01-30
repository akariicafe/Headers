@interface TXROptions : NSObject <NSCopying>

@property (nonatomic) BOOL cubemapFromVerticallyStackedImage;
@property (nonatomic) unsigned long long originOperation;
@property (nonatomic) unsigned long long colorSpaceHandling;
@property (nonatomic) BOOL multiplyAlpha;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
