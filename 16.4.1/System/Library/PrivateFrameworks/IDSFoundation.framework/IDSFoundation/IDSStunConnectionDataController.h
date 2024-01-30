@class NSMutableDictionary;

@interface IDSStunConnectionDataController : NSObject {
    NSMutableDictionary *_tokenToConnectionData;
    NSMutableDictionary *_tokenToDeliveryStatus;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)deliveryStatus:(id)a0;
- (id)candidatesFromData:(id)a0 token:(id)a1;
- (id)dataFromCandidates:(id)a0 token:(id)a1 remoteDeviceVersion:(unsigned int)a2;
- (void)removeData:(id)a0;
- (void)setDeliveryStatus:(id)a0 status:(unsigned long long)a1;

@end
