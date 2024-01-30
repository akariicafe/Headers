@class TKSmartCardSlot, NSString;

@interface TKSmartCardUserInteractionForStringEntry : TKSmartCardUserInteraction <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) TKSmartCardSlot *slot;
@property (retain) NSString *result;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)runWithReply:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
