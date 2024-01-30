@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem {
    NSString *_title;
    NSString *_body;
}

- (id)bodyText;
- (void)setBodyText:(id)a0;
- (id)title;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)dismissButtonText;
- (id)initWithTitle:(id)a0 body:(id)a1;
- (void)performUnlockAction;
- (BOOL)suppressForKeynote;

@end
