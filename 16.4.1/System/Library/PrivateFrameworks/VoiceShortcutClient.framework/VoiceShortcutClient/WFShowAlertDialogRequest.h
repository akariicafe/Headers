@class NSString, WFDialogButton;

@interface WFShowAlertDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) WFDialogButton *okButton;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPrompt:(id)a0 message:(id)a1 cancelButton:(id)a2 attribution:(id)a3;
- (id)initWithPrompt:(id)a0 message:(id)a1 okButton:(id)a2 cancelButton:(id)a3 attribution:(id)a4;

@end
