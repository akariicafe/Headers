@class NSString, NSAttributedString;

@interface PXStatusViewModel : PXObservable

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSAttributedString *attributedMessage;
@property (readonly, copy, nonatomic) NSString *actionTitle;
@property (readonly, copy, nonatomic) NSString *actionConfirmationAlertTitle;
@property (readonly, copy, nonatomic) NSString *actionConfirmationAlertSubtitle;
@property (readonly, copy, nonatomic) NSString *actionConfirmationAlertButtonTitle;
@property (readonly, copy, nonatomic) id /* block */ action;

- (void)setActionConfirmationAlertButtonTitle:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setMessage:(id)a0;
- (void)setActionConfirmationAlertSubtitle:(id)a0;
- (void)setActionTitle:(id)a0;
- (void)setActionConfirmationAlertTitle:(id)a0;
- (id)description;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)setAction:(id /* block */)a0;
- (void)setAttributedMessage:(id)a0;

@end
