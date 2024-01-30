@class NSMutableDictionary;

@interface IDSStunConnectionDataController : NSObject {
    NSMutableDictionary *_tokenToConnectionData;
    NSMutableDictionary *_tokenToDeliveryStatus;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)dataFromCandidates:(id)a0 token:(id)a1 remoteDeviceVersion:(unsigned int)a2;
- (unsigned long long)deliveryStatus:(id)a0;
- (void)setDeliveryStatus:(id)a0 status:(unsigned long long)a1;
- (id)candidatesFromData:(id)a0 token:(id)a1;
- (void)removeData:(id)a0;

@end
