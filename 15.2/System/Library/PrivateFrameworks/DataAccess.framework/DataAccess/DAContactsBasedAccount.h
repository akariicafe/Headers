@class NSString, CNAccount;

@interface DAContactsBasedAccount : NSObject <DAContactsAccount>

@property (readonly, nonatomic) CNAccount *account;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)externalIdentifier;
- (BOOL)isContainer;
- (id)identifier;
- (id)initWithAccount:(id)a0;
- (BOOL)isGroup;
- (void)updateSaveRequest:(id)a0;
- (BOOL)isAccount;
- (int)legacyIdentifier;
- (void).cxx_destruct;
- (void)markForDeletion;
- (BOOL)isContact;

@end
