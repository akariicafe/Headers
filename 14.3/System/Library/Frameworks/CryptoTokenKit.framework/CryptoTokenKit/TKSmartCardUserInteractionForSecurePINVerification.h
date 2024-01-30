@class TKSmartCardSlot, NSData, TKSmartCardPINFormat;

@interface TKSmartCardUserInteractionForSecurePINVerification : TKSmartCardUserInteractionForPINOperation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) TKSmartCardSlot *slot;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property (retain) NSData *APDU;
@property long long PINByteOffset;

- (void).cxx_destruct;
- (void)setSlot:(id)a0 PINFormat:(id)a1 APDU:(id)a2 PINByteOffset:(long long)a3;
- (id)initWithCoder:(id)a0;
- (void)runWithReply:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
