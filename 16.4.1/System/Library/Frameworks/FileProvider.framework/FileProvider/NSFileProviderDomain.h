@class NSString, NSDictionary, NSData, NSError, NSUUID;

@interface NSFileProviderDomain : NSObject <NSSecureCoding, NSCopying> {
    NSData *_backingStoreIdentity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *symLinkName;
@property (nonatomic) BOOL containsPhotos;
@property (nonatomic) BOOL isContentManaged;
@property (nonatomic) BOOL userEnabled;
@property (nonatomic, getter=isDisconnected) BOOL disconnected;
@property (retain, nonatomic, getter=_disconnectionReason, setter=_setDisconnectionReason:) NSString *disconnectionReason;
@property (nonatomic, getter=_disconnectionOptions, setter=_setDisconnectionOptions:) unsigned long long disconnectionOptions;
@property (retain, nonatomic) NSData *backingStoreIdentity;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *personaIdentifier;
@property (retain, nonatomic) NSString *spotlightDomainIdentifier;
@property (getter=isReplicated) BOOL replicated;
@property (nonatomic) BOOL isEnterpriseDomain;
@property (nonatomic) BOOL isDataSeparatedDomain;
@property (nonatomic, getter=isEjectable) BOOL ejectable;
@property (copy, nonatomic) NSDictionary *domainUserInfo;
@property (nonatomic) BOOL readOnly;
@property (nonatomic, getter=isHiddenByUser) BOOL hiddenByUser;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *pathRelativeToDocumentStorage;
@property (getter=isHidden) BOOL hidden;
@property unsigned long long testingModes;
@property BOOL supportsSyncingTrash;
@property (readonly, nonatomic) NSUUID *volumeUUID;

+ (id)domainFromPlistDictionary:(id)a0 identifier:(id)a1 volumeURL:(id)a2 replicatedByDefault:(BOOL)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 volumeURL:(id)a2 pathRelativeToDocumentStorage:(id)a3 hidden:(BOOL)a4 replicated:(BOOL)a5;
- (id)plistDictionary;
- (id)initWithCoder:(id)a0;
- (void)copyValuesFromExistingDomain:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 pathRelativeToDocumentStorage:(id)a2;
- (id)description;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 volumeURL:(id)a2;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 pathRelativeToDocumentStorage:(id)a2 hidden:(BOOL)a3;
- (void).cxx_destruct;

@end
