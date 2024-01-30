@class NSString, CNMutableGroup;

@interface DAContactsGroup : NSObject <DAGroup>

@property (readonly, nonatomic) CNMutableGroup *group;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)externalIdentifier;
- (BOOL)isContainer;
- (void)setETag:(id)a0;
- (id)eTag;
- (BOOL)isGroup;
- (void)setExternalIdentifier:(id)a0;
- (void)updateSaveRequest:(id)a0;
- (id)externalUUID;
- (BOOL)isAccount;
- (int)legacyIdentifier;
- (void).cxx_destruct;
- (void)setExternalUUID:(id)a0;
- (id)asGroup;
- (id)initWithGroup:(id)a0;
- (void)markForDeletion;
- (BOOL)isContact;
- (void *)asABGroup;

@end
