@class NSString, NSArray, NSData, NSDate, NSUUID;

@interface RPIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *dateAcknowledged;
@property (copy, nonatomic) NSDate *dateAdded;
@property (copy, nonatomic) NSDate *dateRemoved;
@property (copy, nonatomic) NSDate *dateRequested;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSData *edSKData;
@property (nonatomic) unsigned long long featureFlags;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *mediaRemoteID;
@property (copy, nonatomic) NSString *mediaRouteID;
@property (nonatomic) BOOL present;
@property (nonatomic) unsigned int revisionID;
@property (copy, nonatomic) NSArray *accessGroups;
@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *contactID;
@property (copy, nonatomic) NSData *deviceIRKData;
@property (copy, nonatomic) NSData *edPKData;
@property (copy, nonatomic) NSUUID *homeKitUserIdentifier;
@property (copy, nonatomic) NSString *idsDeviceID;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sendersKnownAlias;
@property (nonatomic) int type;
@property (nonatomic) BOOL userAdded;

+ (id)nullIdentity;

- (id)signData:(id)a0 error:(id *)a1;
- (BOOL)verifyAuthTagPtr:(const void *)a0 authTagLen:(unsigned long long)a1 dataPtr:(const void *)a2 dataLen:(unsigned long long)a3 type:(int)a4 error:(id *)a5;
- (BOOL)verifyAuthTag:(id)a0 data:(id)a1 type:(int)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(int)a0;
- (unsigned int)updateWithRPMessage:(id)a0 error:(id *)a1;
- (id)description;
- (id)authTagForData:(id)a0 type:(int)a1 error:(id *)a2;
- (BOOL)verifySignaturePtr:(const void *)a0 signatureLen:(unsigned long long)a1 dataPtr:(const void *)a2 dataLen:(unsigned long long)a3 error:(id *)a4;
- (BOOL)verifySignature:(id)a0 data:(id)a1 error:(id *)a2;
- (id)descriptionWithLevel:(int)a0;
- (unsigned int)compareWithRPIdentity:(id)a0;
- (unsigned int)updateWithKeychainItem:(id)a0 error:(id *)a1;
- (BOOL)signDataPtr:(const void *)a0 dataLen:(unsigned long long)a1 signatureBytes:(unsigned char[64])a2 error:(id *)a3;
- (void)encodeWithCoder:(id)a0;

@end
