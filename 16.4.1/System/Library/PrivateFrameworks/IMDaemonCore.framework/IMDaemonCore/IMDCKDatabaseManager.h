@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (id)_nickNameContainerIdentifier;
- (id)truthDatabase;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;
- (BOOL)_serverSaysToUseOldContainer;
- (id)init;
- (id)manateeDataBase;
- (id)_nickNameContainer;
- (id)nickNamePublicDatabase;
- (void).cxx_destruct;
- (id)truthPublicDatabase;

@end
