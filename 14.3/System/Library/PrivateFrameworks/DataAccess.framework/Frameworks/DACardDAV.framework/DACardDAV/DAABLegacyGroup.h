@class NSString;

@interface DAABLegacyGroup : NSObject <DAGroup>

@property (readonly, nonatomic) void *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainer;
- (BOOL)isGroup;
- (void)setExternalIdentifier:(id)a0;
- (id)externalIdentifier;
- (BOOL)isContact;
- (id)initWithGroup:(void *)a0;
- (void)markForDeletion;
- (void)dealloc;
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
