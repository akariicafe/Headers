@class NSArray;

@interface CKReviewLargeUnsyncedConversationsViewController : CKAbstractReviewViewController

@property (retain, nonatomic) NSArray *conversations;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_populateConversationsIfNeeded;
- (id)tableViewCellReuseIdentifier;
- (Class)tableViewCellClass;
- (void)reloadModelData;
- (unsigned long long)numberOfModelObjects;
- (id)modelObjectAtIndex:(unsigned long long)a0;
- (void)deleteModelObjectAndUnderlyingData:(id)a0;
- (void)didSelectModelObjectAtIndex:(unsigned long long)a0;
- (id)navigationBarTitle;

@end
