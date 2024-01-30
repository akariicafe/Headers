@class NSString, NSArray;

@interface FCCKOrderFeedResponse : NSObject

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSArray *feedItemAndArticleRecords;
@property (nonatomic) BOOL reachedEnd;
@property (nonatomic) BOOL reachedMinOrder;
@property (nonatomic) unsigned long long extent;
@property (nonatomic) BOOL wasDropped;

- (void).cxx_destruct;
- (id)description;

@end
