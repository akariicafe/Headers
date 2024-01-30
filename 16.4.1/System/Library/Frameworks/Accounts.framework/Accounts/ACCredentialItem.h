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

- (void)encodeWithCoder:(id)a0;
- (id)_encodeProtobufData;
- (void)setAccountIdentifier:(id)a0;
- (id)fullDescription;
- (void)_markPropertyDirty:(id)a0;
- (void)setServiceName:(id)a0;
- (id)_initWithProtobuf:(id)a0;
- (id)_initWithProtobufData:(id)a0;
- (id)_encodeProtobuf;
- (BOOL)isPropertyDirty:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearDirtyProperties;
- (id)initWithManagedCredentialItem:(id)a0 accountStore:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccountIdentifier:(id)a0 serviceName:(id)a1;
- (id)initWithManagedCredentialItem:(id)a0;
- (void)markAllPropertiesDirty;
- (void).cxx_destruct;

@end
