@class VSOptional, NSString, NSItemProvider, UIImage;

@interface VSCuratedViewModel : VSViewModel <VSLogoImageViewModel>

@property (nonatomic, getter=isBeginValidationButtonEnabled) BOOL beginValidationButtonEnabled;
@property (copy, nonatomic) NSString *beginValidationButtonTitle;
@property (retain, nonatomic) VSOptional *identityProviderDisplayName;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *notice;
@property (nonatomic) BOOL showFooter;
@property (copy, nonatomic) NSString *footerText;
@property (retain, nonatomic) NSItemProvider *logoProvider;
@property (retain, nonatomic) UIImage *logo;
@property (copy, nonatomic) NSString *logoAccessibilityLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)configureWithRequest:(id)a0;

@end
