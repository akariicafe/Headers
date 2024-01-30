@class NSString;

@interface GKLoginAlertView : UIAlertView <UITextFieldDelegate> {
    unsigned long long _passwordFieldIndex;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPassword:(id)a0;
- (id)password;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)initWithDelegate:(id)a0 uneditableUsername:(id)a1;
- (void)_updateFrameForDisplay;

@end
