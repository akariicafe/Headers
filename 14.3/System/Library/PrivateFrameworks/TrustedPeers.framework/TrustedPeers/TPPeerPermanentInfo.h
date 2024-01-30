@class NSString, NSData;
@protocol TPPublicKey;

@interface TPPeerPermanentInfo : NSObject

@property (retain, nonatomic) NSString *machineID;
@property (retain, nonatomic) NSString *modelID;
@property (nonatomic) unsigned long long epoch;
@property (retain, nonatomic) id<TPPublicKey> signingPubKey;
@property (retain, nonatomic) id<TPPublicKey> encryptionPubKey;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *sig;
@property (retain, nonatomic) NSString *peerID;

+ (id)permanentInfoWithMachineID:(id)a0 modelID:(id)a1 epoch:(unsigned long long)a2 signingKeyPair:(id)a3 encryptionKeyPair:(id)a4 peerIDHashAlgo:(long long)a5 error:(id *)a6;
+ (id)peerIDForData:(id)a0 sig:(id)a1 peerIDHashAlgo:(long long)a2;
+ (id)permanentInfoWithPeerID:(id)a0 data:(id)a1 sig:(id)a2 keyFactory:(id)a3;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithMachineID:(id)a0 modelID:(id)a1 epoch:(unsigned long long)a2 signingPubKey:(id)a3 encryptionPubKey:(id)a4 data:(id)a5 sig:(id)a6 peerID:(id)a7;

@end
