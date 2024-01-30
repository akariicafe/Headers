@class NSString, NSNumber, UITraitCollection;

@interface AMSUISystemImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) NSNumber *variableValue;

- (void)main;
- (void).cxx_destruct;
- (BOOL)isLowLatency;
- (id)initWithSystemImageName:(id)a0 variableValue:(id)a1 compatibleWithTraitCollection:(id)a2;

@end
