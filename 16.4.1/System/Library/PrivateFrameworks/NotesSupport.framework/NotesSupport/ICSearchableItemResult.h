@class NSArray, CSSearchableItem;

@interface ICSearchableItemResult : NSObject

@property (retain, nonatomic) CSSearchableItem *searchableItem;
@property (retain, nonatomic) NSArray *additionalSearchableItems;

- (void).cxx_destruct;

@end
