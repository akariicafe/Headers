@class NSString;

@interface DAABLegacyContainer : NSObject <DAContainer>

@property (readonly, nonatomic) void *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainer;
- (BOOL)isGroup;
- (BOOL)isLocal;
- (void)setName:(id)a0;
- (void)setExternalIdentifier:(id)a0;
- (void)setSyncData:(id)a0;
- (id)externalIdentifier;
- (id)cTag;
- (BOOL)isContact;
- (void)setAccountIdentifier:(id)a0;
- (void)markForDeletion;
- (void)setType:(long long)a0;
- (void)dealloc;
- (id)syncTag;
- (id)accountIdentifier;
- (void)setCTag:(id)a0;
- (void)updateSaveRequest:(id)a0;
- (void *)asSource;
- (long long)type;
- (id)constraintsPath;
- (void)setConstraintsPath:(id)a0;
- (id)syncData;
- (id)name;
- (BOOL)isAccount;
- (void)setSyncTag:(id)a0;
- (void)setMeContactIdentifier:(id)a0;
- (BOOL)isContentReadonly;
- (void)setContentReadonly:(BOOL)a0;
- (BOOL)arePropertiesReadonly;
- (void)setArePropertiesReadonly:(BOOL)a0;
- (BOOL)isSearchContainer;
- (void)markAsDefault;
- (id)asContainer;
- (id)initWithABSource:(void *)a0;
- (id)identifier;
- (id)meContactidentifier;

@end
