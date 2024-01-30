@class NSString;

@interface DAABLegacyContact : NSObject <DAContact>

@property (readonly, nonatomic) void *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)externalIdentifier;
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
- (void)setExternalUUID:(id)a0;
- (void)markForDeletion;
- (BOOL)isContact;
- (void)dealloc;
- (id)initWithABPerson:(void *)a0;

@end
