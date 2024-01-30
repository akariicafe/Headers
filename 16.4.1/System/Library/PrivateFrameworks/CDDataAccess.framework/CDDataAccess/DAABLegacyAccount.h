@class NSString;

@interface DAABLegacyAccount : NSObject <DAContactsAccount>

@property (readonly, nonatomic) void *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isGroup;
- (BOOL)isContainer;
- (id)identifier;
- (void)dealloc;
- (id)externalIdentifier;
- (int)legacyIdentifier;
- (BOOL)isContact;
- (void)markForDeletion;
- (id)initWithABAccout:(void *)a0;
- (BOOL)isAccount;
- (void)updateSaveRequest:(id)a0;

@end
