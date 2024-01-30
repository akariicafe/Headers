@class UIButton, UIStackView;

@interface FAFamilySharingFeaturesView : UIView {
    long long _context;
    UIButton *_learnMoreButton;
    BOOL _shouldHideLocationSharing;
    UIStackView *_stack;
}

+ (id)rowForIcon:(id)a0 andLabel:(id)a1;

- (void)_updateFonts;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_contextSensitiveLocalizedStringWithKey:(id)a0;
- (id)_imageViewWithIconNamed:(id)a0 addBorder:(BOOL)a1;
- (id)_labelWithStringAtKey:(id)a0;
- (void)_learnMoreButtonTapped:(id)a0;
- (id)initWithContext:(long long)a0 hideLocationSharing:(BOOL)a1;

@end
