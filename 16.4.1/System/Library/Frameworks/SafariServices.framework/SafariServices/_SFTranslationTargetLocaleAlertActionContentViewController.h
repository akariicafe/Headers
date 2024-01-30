@class NSString, NSLayoutConstraint;

@interface _SFTranslationTargetLocaleAlertActionContentViewController : UIViewController {
    NSString *_localeIdentifier;
    NSLayoutConstraint *_topTextPaddingConstraint;
    NSLayoutConstraint *_bottomTextPaddingConstraint;
}

- (id)initWithLocaleIdentifier:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)_updateVerticalPadding;

@end
