@class NSString;

@interface UIPrintAccountInfoOption : UIPrintOption <UITextFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)summary;
- (BOOL)shouldShow;
- (BOOL)canDismiss;
- (id)printOptionTableViewCell;
- (void)selectJobAccountID;
- (BOOL)isJobAccountIDRequired;
- (void)updateJobAccountID:(id)a0;
- (void)promptForJobAccountID;

@end
