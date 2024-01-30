@class NSString, NSArray, PKPaymentHeroImageManifest, PKPaymentWebService;
@protocol PKPaymentHeroImageControllerDelegate;

@interface PKPaymentHeroImageController : NSObject {
    PKPaymentWebService *_webService;
}

@property (copy, nonatomic) NSString *primaryImageIdentifier;
@property (copy, nonatomic) NSArray *featuredImages;
@property (readonly, nonatomic) PKPaymentHeroImageManifest *manifest;
@property (weak, nonatomic) id<PKPaymentHeroImageControllerDelegate> delegate;
@property (nonatomic) long long watchSize;

+ (id)defaultImages;
+ (struct CGSize { double x0; double x1; })cardArtSizeForWatchViewSize:(struct CGSize { double x0; double x1; })a0;
+ (double)cardAspectRatio;

- (void).cxx_destruct;
- (id)featuredImageIdentifiers;
- (id)initWithManifest:(id)a0 webService:(id)a1;
- (id)filterImages:(id)a0;
- (id)featuredDefaultImages;
- (void)downloadImages:(id)a0;
- (struct CGSize { double x0; double x1; })cardArtSizeForSize:(struct CGSize { double x0; double x1; })a0;

@end
