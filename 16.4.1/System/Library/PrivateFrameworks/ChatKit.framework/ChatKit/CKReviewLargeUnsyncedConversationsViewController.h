@class NSArray;
@protocol IMDaemonMultiplexedConnectionManaging;

@interface CKReviewLargeUnsyncedConversationsViewController : CKAbstractReviewViewController

@property (retain, nonatomic) NSArray *conversations;
@property (retain, nonatomic) id<IMDaemonMultiplexedConnectionManaging> daemonConnection;

- (id)navigationBarTitle;
- (void)dealloc;
- (void).cxx_destruct;
- (Class)tableViewCellClass;
- (void)reloadModelData;
- (void)_populateConversationsIfNeeded;
- (void)deleteModelObjectAndUnderlyingData:(id)a0;
- (void)didSelectModelObjectAtIndex:(unsigned long long)a0;
- (id)modelObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfModelObjects;
- (id)tableViewCellReuseIdentifier;

@end
