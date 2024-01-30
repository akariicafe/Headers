@class NSData, NSNumber, NSString;

@interface FTAcceptMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSData *selfPushToken;
@property (copy) NSNumber *selfNATType;
@property (copy) NSData *selfBlob;
@property (copy) NSData *selfNATIP;
@property (copy) NSString *peerID;
@property (copy) NSData *peerPushToken;
@property (copy) NSNumber *peerNATType;
@property (copy) NSData *peerBlob;
@property (copy) NSData *peerNATIP;
@property (copy) NSNumber *relayType;
@property (copy) NSData *relayConnectionId;
@property (copy) NSData *relayTransactionIdAlloc;
@property (copy) NSData *relayTokenAllocReq;
@property (copy) NSData *selfRelayIP;
@property (copy) NSNumber *selfRelayPort;
@property (copy) NSData *peerRelayIP;
@property (copy) NSNumber *peerRelayPort;

- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)handleResponseDictionary:(id)a0;
- (id)init;
- (id)messageBody;
- (id)requiredKeys;

@end
