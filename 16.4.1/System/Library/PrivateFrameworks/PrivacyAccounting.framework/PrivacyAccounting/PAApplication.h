@class PABridgedTCCIdentity, NSString, NSObject;
@protocol OS_tcc_identity;

@interface PAApplication : NSObject <NSCopying, NSSecureCoding, BMProtoBufWrapper>

@property (class, readonly, nonatomic) PAApplication *applicationForCurrentProcess;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int insecureProcessIdentifier;
@property (readonly, nonatomic) NSString *descriptionForIdentifier;
@property (readonly, nonatomic) PABridgedTCCIdentity *bridgedAssumedIdentity;
@property (readonly, nonatomic) long long identifierType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;

+ (id)applicationWithType:(long long)a0 identifier:(id)a1;
+ (id)applicationWithBundleID:(id)a0;
+ (id)applicationWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)applicationWithPath:(id)a0;

- (id)JSONObject;
- (id)initWithProto:(id)a0;
- (id)initWithPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1;
- (id)descriptionForIdentifierType;
- (id)encodeAsProto;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithInProcessIdentity;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithTCCIdentity:(id)a0;
- (id)initWithBundleID:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithInProcessAssumedIdentity:(id)a0;
- (unsigned long long)hash;
- (id)initWithInProcessBridgedAssumedIdentity:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInsecureProcessIdentifier:(int)a0;

@end
