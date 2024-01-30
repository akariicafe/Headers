@class NSString, CNMutableContact;

@interface DAContactsContact : NSObject <DAContact>

@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)externalIdentifier;
- (id)initWithContact:(id)a0;
- (BOOL)isContainer;
- (void)setETag:(id)a0;
- (void *)asPerson;
- (id)eTag;
- (BOOL)isGroup;
- (id)asContact;
- (void)setExternalIdentifier:(id)a0;
- (void)updateSaveRequest:(id)a0;
- (id)externalUUID;
- (BOOL)isAccount;
- (int)legacyIdentifier;
- (void).cxx_destruct;
- (void)setExternalUUID:(id)a0;
- (void)markForDeletion;
- (BOOL)isContact;

@end
