@class NSString, CNAccount;

@interface DAContactsBasedAccount : NSObject <DAContactsAccount>

@property (readonly, nonatomic) CNAccount *account;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isContainer;
- (BOOL)isGroup;
- (id)externalIdentifier;
- (BOOL)isContact;
- (void).cxx_destruct;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)a0;
- (int)legacyIdentifier;
- (id)initWithAccount:(id)a0;
- (BOOL)isAccount;
- (id)identifier;

@end
