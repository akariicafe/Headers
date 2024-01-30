@class NSString, NSData, NSMutableArray, NSNumber;

@interface FTIDSMessage : IDSBaseMessage <NSCopying> {
    NSNumber *_serverTimestamp;
    NSNumber *_serverTimestampReceivedDate;
}

@property (nonatomic) struct __SecKey { } *pushPrivateKey;
@property (nonatomic) struct __SecKey { } *pushPublicKey;
@property (copy, nonatomic) NSData *pushCertificate;
@property (copy, nonatomic) NSData *pushToken;
@property (copy, nonatomic) NSString *selfURI;
@property (copy, nonatomic) NSMutableArray *certDataArray;
@property (copy, nonatomic) NSMutableArray *publicKeyArray;
@property (copy, nonatomic) NSMutableArray *privateKeyArray;
@property (copy, nonatomic) NSMutableArray *userIDArray;
@property (nonatomic) struct __SecKey { } *identityPrivateKey;
@property (nonatomic) struct __SecKey { } *identityPublicKey;
@property (copy, nonatomic) NSData *IDCertificate;
@property (readonly) BOOL wantsIDSProtocolVersion;

- (id)serverTimestamp;
- (long long)responseCommand;
- (BOOL)wantsHTTPHeaders;
- (long long)command;
- (id)additionalMessageHeaders;
- (BOOL)wantsBagKey;
- (id)retryCountKey;
- (BOOL)wantsIDSServer;
- (BOOL)wantsSignature;
- (BOOL)wantsBodySignature;
- (id)serverTimestampReceivedDate;
- (void)setServerTimestampReceivedDate:(id)a0;
- (void)setServerTimestamp:(id)a0;
- (void).cxx_destruct;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsCompressedBody;
- (void)dealloc;
- (BOOL)wantsBinaryPush;
- (void)addAuthUserID:(id)a0 certificate:(id)a1 privateKey:(struct __SecKey { } *)a2 publicKey:(struct __SecKey { } *)a3;

@end
