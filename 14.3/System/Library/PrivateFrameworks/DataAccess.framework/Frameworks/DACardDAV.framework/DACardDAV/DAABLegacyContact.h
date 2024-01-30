@class NSString;

@interface DAABLegacyContact : NSObject <DAContact>

@property (readonly, nonatomic) void *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainer;
- (BOOL)isGroup;
- (void)setExternalIdentifier:(id)a0;
- (id)externalIdentifier;
- (BOOL)isContact;
- (void)markForDeletion;
- (void)dealloc;
- (void)updateSaveRequest:(id)a0;
- (int)legacyIdentifier;
- (id)externalUUID;
- (void)setExternalUUID:(id)a0;
- (void)setETag:(id)a0;
- (id)eTag;
- (BOOL)isAccount;
- (void *)asPerson;
- (id)asContact;
- (id)initWithABPerson:(void *)a0;

@end
