@class SULinkControl, SUSubtitledButton, SUClientInterface;
@protocol SUTermsAndConditionsViewDelegate;

@interface SUTermsAndConditionsView : UIView {
    SUSubtitledButton *_button;
    id<SUTermsAndConditionsViewDelegate> _delegate;
    SULinkControl *_termsAndConditionsControl;
}

@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (weak, nonatomic) id<SUTermsAndConditionsViewDelegate> delegate;
@property (nonatomic) BOOL hideAccountButton;
@property (nonatomic) double rightMargin;
@property (nonatomic) long long style;

- (id)_button;
- (void)sizeToFit;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateButton;
- (void)_buttonAction:(id)a0;
- (void)_accountsChangedNotification:(id)a0;
- (void)_destroyButton;
- (long long)_linkStyleForStyle:(long long)a0;
- (double)_buttonHeightForStyle:(long long)a0;
- (id)_termsAndConditionsControl;
- (void)_clearButtonSelection:(id)a0;
- (void)_termsAndConditionsAction:(id)a0;

@end
