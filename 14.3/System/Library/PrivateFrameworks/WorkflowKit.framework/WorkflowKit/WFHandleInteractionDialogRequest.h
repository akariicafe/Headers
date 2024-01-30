@class WFDialogButton, INInteraction;

@interface WFHandleInteractionDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INInteraction *interaction;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInteraction:(id)a0 prompt:(id)a1;
- (id)initWithInteraction:(id)a0 attribution:(id)a1;

@end
