@class NSString, TKSmartCard, NSData, TKSmartCardPINFormat;

@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation

@property (copy) NSString *localizedPINLabel;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property (copy) NSData *APDUTemplate;
@property long long PINByteOffset;
@property (retain) TKSmartCard *smartCard;
@property (copy) NSString *PIN;

+ (BOOL)supportsSecureCoding;

- (BOOL)finishWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)importOperation:(id)a0;
- (Class)baseClassForUI;
- (void)encodeWithCoder:(id)a0;

@end
