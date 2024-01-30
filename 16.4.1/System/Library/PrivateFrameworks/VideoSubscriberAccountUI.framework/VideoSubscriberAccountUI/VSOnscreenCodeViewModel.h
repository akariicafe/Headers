@class NSString, NSItemProvider, UIImage, NSURL;
@protocol VSOnscreenCodeViewModelDelegate;

@interface VSOnscreenCodeViewModel : VSViewModel <VSLogoImageViewModel>

@property (weak, nonatomic) id<VSOnscreenCodeViewModelDelegate> delegate;
@property (retain, nonatomic) UIImage *qrCode;
@property (copy, nonatomic) NSString *onscreenCode;
@property (retain, nonatomic) NSString *webPageLabel;
@property (copy, nonatomic) NSURL *webPageURL;
@property (nonatomic) BOOL showButtonLockup;
@property (copy, nonatomic) NSString *buttonLockupTitle;
@property (retain, nonatomic) NSItemProvider *logoProvider;
@property (retain, nonatomic) UIImage *logo;
@property (copy, nonatomic) NSString *logoAccessibilityLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureWithRequest:(id)a0;
- (id)formattedWebsiteURL;
- (void)generateQRCode;
- (id)websiteURLWithQueryParameters;

@end
