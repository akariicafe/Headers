@class NSString, CNMutableContact;

@interface DAContactsContact : NSObject <DAContact>

@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isGroup;
- (BOOL)isContainer;
- (void)setETag:(id)a0;
- (id)initWithContact:(id)a0;
- (id)externalIdentifier;
- (int)legacyIdentifier;
- (void)setExternalIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)eTag;
- (BOOL)isContact;
- (id)externalUUID;
- (void)setExternalUUID:(id)a0;
- (void)markForDeletion;
- (BOOL)isAccount;
- (void)updateSaveRequest:(id)a0;
- (id)asContact;
- (void *)asPerson;

@end
