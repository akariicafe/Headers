@class UIButton, NSMutableArray, UIImageView, UIImage, GEOAppStoreApp, UIView, _MKUILabel;
@protocol MKOfficialAppViewDelegate;

@interface MKOfficialAppView : MKPlaceSectionRowView {
    UIImageView *_storeAppImageView;
    UIView *_labelContainerView;
    _MKUILabel *_appNameLabel;
    _MKUILabel *_descriptionLabel;
    UIButton *_punchOutButton;
    NSMutableArray *_constraintArray;
    BOOL _layoutShouldStack;
}

@property (retain, nonatomic) GEOAppStoreApp *appStoreApp;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id<MKOfficialAppViewDelegate> delegate;
@property (nonatomic) BOOL isAppInstalled;

- (void)_updateFonts;
- (void)_commonInit;
- (void).cxx_destruct;
- (void)_createConstraints;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateShouldLayoutStack;
- (void)_punchOutButtonSelected:(id)a0;
- (void)_contentSizeDidChangeNotificationHandler;
- (void)updateButtonText;
- (void)_updateLabelText;

@end
