@class NSSet;

@interface NPKPeerPaymentQuickTypeParser : NSObject

@property (readonly, nonatomic) NSSet *supportedCurrencyCodes;
@property (readonly, nonatomic) NSSet *allowedPayloadIDs;

- (void).cxx_destruct;
- (id)initWithSupportedCurrencyCodes:(id)a0 allowedPayloadIDs:(id)a1;
- (id)parsePayload:(id)a0 payloadID:(id)a1;
- (id)parsePayload:(id)a0 payloadID:(id)a1 maxCount:(unsigned long long)a2;

@end
