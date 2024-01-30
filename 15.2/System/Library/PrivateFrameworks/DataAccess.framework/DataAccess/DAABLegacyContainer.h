@class NSString;

@interface DAABLegacyContainer : NSObject <DAContainer>

@property (readonly, nonatomic) void *source;
@property (nonatomic, getter=isGuardianRestricted) BOOL guardianRestricted;
@property (nonatomic, getter=isGuardianStateDirty) BOOL guardianStateDirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)externalIdentifier;
- (BOOL)isLocal;
- (BOOL)isContainer;
- (void)setAccountIdentifier:(id)a0;
- (id)identifier;
- (id)cTag;
- (BOOL)isGroup;
- (void)setExternalIdentifier:(id)a0;
- (void)setName:(id)a0;
- (void)updateSaveRequest:(id)a0;
- (id)meContactIdentifier;
- (id)accountIdentifier;
- (void)setMeContactIdentifier:(id)a0;
- (BOOL)isAccount;
- (id)syncTag;
- (id)syncData;
- (void)markForDeletion;
- (id)name;
- (long long)type;
- (BOOL)isContact;
- (void)setCTag:(id)a0;
- (void *)asSource;
- (void)dealloc;
- (void)setType:(long long)a0;
- (id)constraintsPath;
- (void)setConstraintsPath:(id)a0;
- (void)setSyncData:(id)a0;
- (void)setSyncTag:(id)a0;
- (BOOL)isContentReadonly;
- (void)setContentReadonly:(BOOL)a0;
- (BOOL)arePropertiesReadonly;
- (void)setArePropertiesReadonly:(BOOL)a0;
- (BOOL)isSearchContainer;
- (void)markAsDefault;
- (id)asContainer;
- (id)initWithABSource:(void *)a0;

@end
