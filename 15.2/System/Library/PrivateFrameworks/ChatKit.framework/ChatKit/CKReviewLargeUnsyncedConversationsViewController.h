@class NSArray;

@interface CKReviewLargeUnsyncedConversationsViewController : CKAbstractReviewViewController

@property (retain, nonatomic) NSArray *conversations;

+ (void)initialize;

- (void).cxx_destruct;
- (id)navigationBarTitle;
- (void)reloadModelData;
- (void)_populateConversationsIfNeeded;
- (Class)tableViewCellClass;
- (id)tableViewCellReuseIdentifier;
- (unsigned long long)numberOfModelObjects;
- (id)modelObjectAtIndex:(unsigned long long)a0;
- (void)deleteModelObjectAndUnderlyingData:(id)a0;
- (void)didSelectModelObjectAtIndex:(unsigned long long)a0;

@end
