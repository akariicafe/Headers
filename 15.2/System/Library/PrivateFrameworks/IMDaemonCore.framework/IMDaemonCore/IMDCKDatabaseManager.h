@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (id)nickNamePublicDatabase;
- (id)_nickNameContainer;
- (id)truthDatabase;
- (id)_nickNameContainerIdentifier;
- (id)init;
- (id)manateeDataBase;
- (void)dealloc;
- (BOOL)_serverSaysToUseOldContainer;
- (id)truthPublicDatabase;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;

@end
