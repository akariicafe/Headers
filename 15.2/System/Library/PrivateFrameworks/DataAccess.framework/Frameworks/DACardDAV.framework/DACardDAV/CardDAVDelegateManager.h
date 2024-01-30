@class CardDAVLocalDBHelper, ACAccountStore, NSString;
@protocol CardDAVDelegateInfoProvider;

@interface CardDAVDelegateManager : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) CardDAVLocalDBHelper *databaseHelper;
@property (readonly, nonatomic) id<CardDAVDelegateInfoProvider> delegateProvider;
@property (readonly, nonatomic) NSString *accountID;

+ (void)finishFutures:(id)a0;

- (id)removeAccount:(id)a0;
- (id)initWithDelegateInfoProvider:(id)a0 accountID:(id)a1 databaseHelper:(id)a2;
- (id)account;
- (id)collectDelegateInfoReturningError:(id *)a0;
- (id)existingChildAccountsWithProperty:(id)a0;
- (id)saveAccount:(id)a0;
- (id)addChildWithDelegateInfo:(id)a0;
- (void).cxx_destruct;
- (void)updateDelegates;
- (void)deleteOrphanDatabasesLackingRepresentationInDelegateInfos:(id)a0;

@end
