@class NSString, VSMessageQueue, NSURL, NSItemProvider, UIImage;

@interface VSOnscreenCodeViewModel : VSViewModel <VSLogoImageViewModel>

@property (copy, nonatomic) NSString *webPagePreamble;
@property (copy, nonatomic) NSURL *webPageURL;
@property (copy, nonatomic) NSString *webPagePostamble;
@property (copy, nonatomic) NSString *onscreenCode;
@property (nonatomic) BOOL shouldShowRegenerateCodeButton;
@property (copy, nonatomic) NSString *regenerateCodeButtonTitle;
@property (retain, nonatomic) VSMessageQueue *regenerateCodeEventQueue;
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
