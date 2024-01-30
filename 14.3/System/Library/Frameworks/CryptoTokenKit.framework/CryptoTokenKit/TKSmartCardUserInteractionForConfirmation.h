@class TKSmartCardSlot;

@interface TKSmartCardUserInteractionForConfirmation : TKSmartCardUserInteraction <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) TKSmartCardSlot *slot;
@property BOOL result;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)runWithReply:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
