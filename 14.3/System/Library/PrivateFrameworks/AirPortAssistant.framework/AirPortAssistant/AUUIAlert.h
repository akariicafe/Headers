@class NSString, UIAlertAction;
@protocol AUUIAlertDelegate;

@interface AUUIAlert : NSObject <UIAlertViewDelegate> {
    BOOL prepared;
    long long okButtonIndex;
    long long cancelButtonIndex;
    long long alternateButtonIndex;
    long long destructiveButtonIndex;
}

@property (nonatomic) id<AUUIAlertDelegate> delegate;
@property (retain, nonatomic) id viewController;
@property (retain, nonatomic) id context;
@property (nonatomic) long long tag;
@property (nonatomic) BOOL stackButtons;
@property (retain, nonatomic) id alert;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *okButtonTitle;
@property (retain, nonatomic) NSString *cancelButtonTitle;
@property (retain, nonatomic) NSString *alternateButtonTitle;
@property (retain, nonatomic) NSString *destructiveButtonTitle;
@property (retain, nonatomic) UIAlertAction *okAction;
@property (retain, nonatomic) UIAlertAction *cancelAction;
@property (retain, nonatomic) UIAlertAction *alternateAction;
@property (retain, nonatomic) UIAlertAction *destructiveAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)show;
- (void)dealloc;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)a0;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (id)initWithViewController:(id)a0;
- (void)applicationDidEnterBackgroundNotification:(id)a0;
- (void)dismissWithNoActionAnimated:(BOOL)a0;
- (void)dismissWithCancelActionAnimated:(BOOL)a0;
- (id)initWithViewController:(id)a0 actionSheet:(BOOL)a1;
- (void)prepareToShow;
- (void)dismissWithOKActionAnimated:(BOOL)a0;
- (void)enableOKAction:(BOOL)a0;
- (void)enableCancelAction:(BOOL)a0;
- (void)enableDestructiveAction:(BOOL)a0;
- (void)enableAlternateAction:(BOOL)a0;

@end
