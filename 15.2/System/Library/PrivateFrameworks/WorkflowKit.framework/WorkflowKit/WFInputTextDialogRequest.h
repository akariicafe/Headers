@class WFTextFieldConfiguration, NSString, WFDialogButton;

@interface WFInputTextDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) WFTextFieldConfiguration *textFieldConfiguration;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTextFieldConfiguration:(id)a0 message:(id)a1 attribution:(id)a2 prompt:(id)a3;

@end
