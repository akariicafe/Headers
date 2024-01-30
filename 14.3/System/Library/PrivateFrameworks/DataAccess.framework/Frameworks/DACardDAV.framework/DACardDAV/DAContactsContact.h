@class NSString, CNMutableContact;

@interface DAContactsContact : NSObject <DAContact>

@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainer;
- (BOOL)isGroup;
- (id)initWithContact:(id)a0;
- (void)setExternalIdentifier:(id)a0;
- (id)externalIdentifier;
- (BOOL)isContact;
- (void).cxx_destruct;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)a0;
- (int)legacyIdentifier;
- (id)externalUUID;
- (void)setExternalUUID:(id)a0;
- (void)setETag:(id)a0;
- (id)eTag;
- (BOOL)isAccount;
- (void *)asPerson;
- (id)asContact;

@end
