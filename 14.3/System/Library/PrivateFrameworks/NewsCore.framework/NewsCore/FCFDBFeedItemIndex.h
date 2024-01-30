@class NSNumber, FCFDBFeedItem;

@interface FCFDBFeedItemIndex : NSManagedObject

@property (nonatomic) NSNumber *feedLookupID;
@property (nonatomic) unsigned long long feature;
@property (nonatomic) unsigned long long order;
@property (retain, nonatomic) FCFDBFeedItem *feedItem;

@end
