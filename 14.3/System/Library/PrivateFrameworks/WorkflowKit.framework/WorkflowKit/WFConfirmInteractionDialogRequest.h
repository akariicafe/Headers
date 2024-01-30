@class WFDialogButton, INInteraction;

@interface WFConfirmInteractionDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INInteraction *interaction;
@property (readonly, copy, nonatomic) WFDialogButton *confirmButton;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInteraction:(id)a0 prompt:(id)a1;

@end
