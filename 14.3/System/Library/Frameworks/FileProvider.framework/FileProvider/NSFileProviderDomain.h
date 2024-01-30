@class NSString, NSError;

@interface NSFileProviderDomain : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) NSString *symLinkName;
@property (nonatomic) BOOL containsPhotos;
@property (nonatomic) BOOL isContentManaged;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *personaIdentifier;
@property (nonatomic) BOOL isEnterpriseDomain;
@property (getter=isDisconnected) BOOL disconnected;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *pathRelativeToDocumentStorage;

+ (id)domainFromPlistDictionary:(id)a0 identifier:(id)a1;

- (void).cxx_destruct;
- (id)plistDictionary;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 pathRelativeToDocumentStorage:(id)a2 hidden:(BOOL)a3;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 pathRelativeToDocumentStorage:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)sharedAccountStore;
- (void)encodeWithCoder:(id)a0;

@end
