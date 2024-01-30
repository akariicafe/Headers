@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem {
    NSString *_title;
    NSString *_body;
}

- (id)title;
- (void)setBodyText:(id)a0;
- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)performUnlockAction;
- (void)setTitle:(id)a0;
- (id)bodyText;
- (id)initWithTitle:(id)a0 body:(id)a1;
- (BOOL)suppressForKeynote;
- (id)dismissButtonText;

@end
