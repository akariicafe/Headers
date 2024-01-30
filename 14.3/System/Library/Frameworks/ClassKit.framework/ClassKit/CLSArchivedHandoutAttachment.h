@class NSString, NSArray, NSURL, CLSArchivedHandout;

@interface CLSArchivedHandoutAttachment : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int shareType;
@property (readonly, nonatomic) int permissionType;
@property (readonly, nonatomic) long long contextType;
@property (readonly, nonatomic) long long displayOrder;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSArray *archivedAssets;
@property (readonly, nonatomic) NSArray *contextPath;
@property (readonly, nonatomic) NSString *contextSummary;
@property (readonly, nonatomic) NSString *contextCustomTypeName;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *contentStoreIdentifier;
@property (readonly, nonatomic) NSString *parentObjectID;
@property (readonly, nonatomic) CLSArchivedHandout *parent;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *storeIdentifier;

+ (id)relations;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithType:(int)a0 title:(id)a1;
- (void)setDisplayOrder:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)setURL:(id)a0;
- (void)setTitle:(id)a0;
- (id)_init;
- (void)setBundleIdentifier:(id)a0;
- (void)setShareType:(int)a0;
- (void)setStoreIdentifier:(id)a0;
- (void)setContextType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setContextSummary:(id)a0;
- (void)setContextCustomTypeName:(id)a0;
- (void)setContentStoreIdentifier:(id)a0;
- (void)setContextPath:(id)a0;
- (void)setPermissionType:(int)a0;

@end
