@class UIAlertAction, UITextField, NSString;

@interface PXTitleEditor : NSObject

@property (retain, nonatomic) UITextField *titleTextField;
@property (retain, nonatomic) UITextField *subtitleTextField;
@property (retain, nonatomic) UIAlertAction *confirmAction;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titlePlaceholder;
@property (nonatomic) BOOL includesSubtitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *subtitlePlaceholder;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *confirmButtonTitle;
@property (copy, nonatomic) id /* block */ validation;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)_updateExposedProperties;
- (id)init;
- (void).cxx_destruct;
- (void)presentFromViewController:(id)a0;
- (void)_handleSuccess:(BOOL)a0;
- (void)_invalidateConfirmAction;
- (void)_textFieldDidChange:(id)a0;
- (void)_updateConfirmAction;
- (id)createAlertController;

@end
