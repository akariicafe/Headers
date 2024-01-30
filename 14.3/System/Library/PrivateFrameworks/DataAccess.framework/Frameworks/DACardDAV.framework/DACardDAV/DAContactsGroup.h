@class NSString, CNMutableGroup;

@interface DAContactsGroup : NSObject <DAGroup>

@property (readonly, nonatomic) CNMutableGroup *group;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainer;
- (BOOL)isGroup;
- (void)setExternalIdentifier:(id)a0;
- (id)externalIdentifier;
- (BOOL)isContact;
- (id)initWithGroup:(id)a0;
- (void).cxx_destruct;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)a0;
- (int)legacyIdentifier;
- (id)asGroup;
- (id)externalUUID;
- (void)setExternalUUID:(id)a0;
- (void)setETag:(id)a0;
- (id)eTag;
- (BOOL)isAccount;
- (void *)asABGroup;

@end
