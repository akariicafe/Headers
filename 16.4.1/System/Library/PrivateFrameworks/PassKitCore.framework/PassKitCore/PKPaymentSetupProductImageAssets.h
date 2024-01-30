@interface PKPaymentSetupProductImageAssets : NSObject <NSCopying>

@property (nonatomic) struct CGImage { } *digitalCardImage;
@property (nonatomic) struct CGImage { } *plasticCardImage;
@property (nonatomic) struct CGImage { } *thumbnailImage;
@property (nonatomic) struct CGImage { } *logoImage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
