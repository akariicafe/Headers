@class NSString, NSUUID;

@interface PRSServerPosterIdentity : NSObject <BSXPCSecureCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSUUID *posterUUID;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long supplement;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorIdentityWithProvider:(id)a0 identifier:(id)a1 posterUUID:(id)a2 version:(unsigned long long)a3;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)staticDescriptorIdentityWithProvider:(id)a0 identifier:(id)a1 posterUUID:(id)a2 version:(unsigned long long)a3;
+ (id)debugDescription;
+ (id)configurationIdentityWithProvider:(id)a0 posterUUID:(id)a1 version:(unsigned long long)a2 supplement:(unsigned long long)a3;
+ (void)_setDisableUniquing:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (BOOL)isNewerVersionOfIdentity:(id)a0;
- (void).cxx_destruct;

@end
