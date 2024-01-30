@class NSArray, FCMapTable;

@interface FCFeedPersonalizedItems : NSObject

@property (retain, nonatomic) NSArray *sortedItems;
@property (retain, nonatomic) FCMapTable *scoreProfiles;

- (void).cxx_destruct;

@end
