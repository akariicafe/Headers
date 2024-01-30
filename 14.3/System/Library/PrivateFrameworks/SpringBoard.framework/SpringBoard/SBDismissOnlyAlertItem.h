@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem {
    NSString *_title;
    NSString *_body;
}

- (id)bodyText;
- (void).cxx_destruct;
- (void)performUnlockAction;
- (void)setBodyText:(id)a0;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)setTitle:(id)a0;
- (id)title;
- (id)initWithTitle:(id)a0 body:(id)a1;
- (BOOL)suppressForKeynote;
- (id)dismissButtonText;

@end
