@class NSSet, NSString, NSURL, ACAccountStore;

@interface ACAccountType : NSObject <ACProtobufCoding, NSCopying, NSSecureCoding> {
    int _visibility;
    NSString *_credentialProtectionPolicy;
}

@property (class, readonly, copy) NSSet *allIdentifiers;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *objectID;
@property (nonatomic) int visibility;
@property (copy, nonatomic) id credentialProtectionPolicy;
@property (retain, nonatomic) NSString *credentialType;
@property (weak, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) int supportsAuthentication;
@property (nonatomic) BOOL supportsMultipleAccounts;
@property (retain, nonatomic) NSString *owningBundleID;
@property (nonatomic, getter=isObsolete) BOOL obsolete;
@property (readonly, nonatomic) NSSet *supportedDataclasses;
@property (readonly, nonatomic) NSSet *syncableDataclasses;
@property (readonly, nonatomic) NSSet *accessKeys;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) NSString *accountTypeDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL accessGranted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithProtobufData:(id)a0;
- (id)_encodeProtobuf;
- (id)_initWithProtobuf:(id)a0;
- (id)_encodeProtobufData;
- (void)setIdentifier:(id)a0;
- (void)setAccountTypeDescription:(id)a0;
- (id)initWithIdentifier:(id)a0 description:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithManagedAccountType:(id)a0;
- (void)setSyncableDataclasses:(id)a0;
- (void).cxx_destruct;
- (void)setSupportedDataclasses:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithManagedAccountType:(id)a0 accountStore:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
