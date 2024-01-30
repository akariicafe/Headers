@class NSString, UITraitCollection;

@interface AMSUISystemImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) UITraitCollection *traitCollection;

- (void)main;
- (void).cxx_destruct;
- (BOOL)isLowLatency;
- (id)initWithSystemImageName:(id)a0 compatibleWithTraitCollection:(id)a1;

@end
