@class NSString, NSLayoutConstraint;

@interface _SFTranslationTargetLocaleAlertActionContentViewController : UIViewController {
    NSString *_localeIdentifier;
    NSLayoutConstraint *_topTextPaddingConstraint;
    NSLayoutConstraint *_bottomTextPaddingConstraint;
}

- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (void)_updateVerticalPadding;

@end
