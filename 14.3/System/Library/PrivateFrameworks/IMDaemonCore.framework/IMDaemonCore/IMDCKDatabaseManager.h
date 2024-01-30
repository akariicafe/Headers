@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nonHSA2ManateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;
@property (readonly, nonatomic) BOOL useStingRay;

+ (id)sharedInstance;

- (id)init;
- (BOOL)_serverSaysToUseOldContainer;
- (void)dealloc;
- (id)nonHSA2ManateeDatabase;
- (id)nickNamePublicDatabase;
- (id)_nickNameContainer;
- (id)_nickNameContainerIdentifier;
- (id)truthDatabase;
- (id)truthPublicDatabase;
- (id)manateeDataBase;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;

@end
