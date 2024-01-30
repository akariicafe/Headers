@class NSString, NSData;

@interface BKSHIDEventAuthenticationMessage : NSObject <NSSecureCoding, NSCopying, BSProtobufSerializable> {
    NSData *_signature;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) unsigned int eventType;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) long long keyGeneration;
@property (readonly, nonatomic) unsigned long long originIdentifier;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withKey:(id)a0 buildMessage:(id /* block */)a1;
+ (id)messageWithOriginIdentifier:(unsigned long long)a0 context:(unsigned long long)a1 destinationAuditToken:(id)a2 signWithKey:(id)a3;
+ (id)new;
+ (id)protobufSchema;

- (id)initForProtobufDecoding;
- (id)initWithOriginIdentifier:(unsigned long long)a0 context:(unsigned long long)a1 destinationAuditToken:(id)a2 signWithKey:(id)a3;
- (BOOL)_verifySignatureWithKey:(id)a0;
- (BOOL)verifySignatureWithKeys:(id)a0;
- (BOOL)verifySignatureWithKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)destinationAuditToken;

@end
