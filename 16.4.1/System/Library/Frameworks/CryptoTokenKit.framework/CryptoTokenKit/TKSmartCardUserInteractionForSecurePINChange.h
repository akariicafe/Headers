@class TKSmartCardSlot, NSData, TKSmartCardPINFormat;

@interface TKSmartCardUserInteractionForSecurePINChange : TKSmartCardUserInteractionForPINOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) TKSmartCardSlot *slot;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property (retain) NSData *APDU;
@property long long currentPINByteOffset;
@property long long newPINByteOffset;
@property unsigned long long PINConfirmation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)runWithReply:(id /* block */)a0;
- (void)setSlot:(id)a0 PINFormat:(id)a1 APDU:(id)a2 currentPINByteOffset:(long long)a3 newPINByteOffset:(long long)a4;

@end
