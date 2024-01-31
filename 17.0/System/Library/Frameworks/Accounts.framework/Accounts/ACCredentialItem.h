@class NSString, NSURL, NSDate, ACAccountStore, NSMutableSet;

@interface ACCredentialItem : NSObject <NSSecureCoding, ACProtobufCoding> {
    NSString *_accountIdentifier;
    NSDate *_expirationDate;
    NSString *_serviceName;
    BOOL _persistent;
    NSURL *_objectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSString *serviceName;
@property (nonatomic, getter=isPersistent) BOOL persistent;
@property (retain, nonatomic) NSURL *objectID;
@property (weak, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly, nonatomic) NSMutableSet *dirtyProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithProtobufData:(id)a0;
- (id)fullDescription;
- (id)_encodeProtobuf;
- (id)_initWithProtobuf:(id)a0;
- (id)_encodeProtobufData;
- (void)_markPropertyDirty:(id)a0;
- (void)setAccountIdentifier:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 serviceName:(id)a1;
- (void)setServiceName:(id)a0;
- (id)initWithManagedCredentialItem:(id)a0;
- (void)clearDirtyProperties;
- (void)encodeWithCoder:(id)a0;
- (id)initWithManagedCredentialItem:(id)a0 accountStore:(id)a1;
- (BOOL)isPropertyDirty:(id)a0;
- (void)markAllPropertiesDirty;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
