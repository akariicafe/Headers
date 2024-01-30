@class NSString;

@interface DAABLegacyAccount : NSObject <DAContactsAccount>

@property (readonly, nonatomic) void *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainer;
- (BOOL)isGroup;
- (id)externalIdentifier;
- (BOOL)isContact;
- (void)markForDeletion;
- (void)dealloc;
- (void)updateSaveRequest:(id)a0;
- (int)legacyIdentifier;
- (id)initWithABAccout:(void *)a0;
- (BOOL)isAccount;
- (id)identifier;

@end
