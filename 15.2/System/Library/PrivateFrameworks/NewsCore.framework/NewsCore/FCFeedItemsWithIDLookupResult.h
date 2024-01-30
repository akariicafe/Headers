@class NSDictionary, NSArray;

@interface FCFeedItemsWithIDLookupResult : NSObject

@property (retain, nonatomic) NSDictionary *sectionIDsByFeedID;
@property (retain, nonatomic) NSArray *feedItems;

- (id)initWithSectionIDByFeedID:(id)a0 feedItems:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
