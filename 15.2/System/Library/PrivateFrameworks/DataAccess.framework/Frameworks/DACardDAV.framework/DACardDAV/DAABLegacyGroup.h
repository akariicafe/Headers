@class NSString;

@interface DAABLegacyGroup : NSObject <DAGroup>

@property (readonly, nonatomic) void *group;
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
- (void)setExternalUUID:(id)a0;
- (id)asGroup;
- (id)initWithGroup:(void *)a0;
- (void)markForDeletion;
- (BOOL)isContact;
- (void)dealloc;
- (void *)asABGroup;

@end
