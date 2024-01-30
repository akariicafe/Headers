@class NSString, NSLayoutConstraint;

@interface _SFTranslationTargetLocaleAlertActionContentViewController : UIViewController {
    NSString *_localeIdentifier;
    NSLayoutConstraint *_topTextPaddingConstraint;
    NSLayoutConstraint *_bottomTextPaddingConstraint;
}

- (void).cxx_destruct;
- (void)loadView;
- (void)_updateVerticalPadding;
- (id)initWithLocaleIdentifier:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
