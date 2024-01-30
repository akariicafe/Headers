@class NSString;

@interface DAABLegacyAccount : NSObject <DAContactsAccount>

@property (readonly, nonatomic) void *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)externalIdentifier;
- (BOOL)isContainer;
- (id)identifier;
- (BOOL)isGroup;
- (void)updateSaveRequest:(id)a0;
- (BOOL)isAccount;
- (int)legacyIdentifier;
- (void)markForDeletion;
- (BOOL)isContact;
- (void)dealloc;
- (id)initWithABAccout:(void *)a0;

@end
