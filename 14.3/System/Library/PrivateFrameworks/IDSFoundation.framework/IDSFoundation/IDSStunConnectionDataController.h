@class NSMutableDictionary;

@interface IDSStunConnectionDataController : NSObject {
    NSMutableDictionary *_tokenToConnectionData;
    NSMutableDictionary *_tokenToDeliveryStatus;
}

+ (id)sharedInstance;

- (unsigned long long)deliveryStatus:(id)a0;
- (id)dataFromCandidates:(id)a0 token:(id)a1;
- (void)setDeliveryStatus:(id)a0 status:(unsigned long long)a1;
- (void)removeData:(id)a0;
- (id)candidatesFromData:(id)a0 token:(id)a1;
- (void).cxx_destruct;

@end
