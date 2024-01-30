@class NSString, CNMutableContainer;

@interface DAContactsContainer : NSObject <DAContainer>

@property (readonly, nonatomic) CNMutableContainer *mutableContainer;
@property (nonatomic) BOOL markedForDeletion;
@property (nonatomic) BOOL markedAsDefault;
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
- (void).cxx_destruct;
- (void)setAccountIdentifier:(id)a0;
- (void)markForDeletion;
- (void)setType:(long long)a0;
- (id)syncTag;
- (id)accountIdentifier;
- (id)initWithCNContainer:(id)a0;
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
- (id)identifier;
- (id)meContactidentifier;

@end
