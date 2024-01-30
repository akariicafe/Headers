@class NSData, NSString, NSUUID;

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL fastOpenRequested;
@property (readonly) BOOL multipathRequested;
@property (readonly) NSData *sourceAppUniqueIdentifier;
@property (readonly) NSString *sourceAppSigningIdentifier;
@property (readonly) NSData *sourceAppAuditToken;
@property (readonly) NSUUID *filterFlowIdentifier;

- (id)initWithUniqueIdentifier:(id)a0 signingIdentifier:(id)a1 fastOpenRequested:(BOOL)a2 multipathRequested:(BOOL)a3 audit_token:(id)a4 filterFlowID:(id)a5;
- (id)initWithProcessUUID:(id)a0 signingIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initFromFlow:(struct _NEFlow { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
