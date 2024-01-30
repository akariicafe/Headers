@class REMListChangeItem;

@interface CalOrderedListChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (nonatomic) long long order;

- (void).cxx_destruct;

@end
