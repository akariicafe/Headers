@class NSString, NSArray, NSData;

@interface FCCKFeedResponse : NSObject

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSArray *feedItemAndArticleRecords;
@property (nonatomic) BOOL reachedEnd;
@property (nonatomic) BOOL reachedOrderLimit;
@property (nonatomic) unsigned long long extent;
@property (copy, nonatomic) NSData *cursor;
@property (nonatomic) BOOL wasDropped;

- (void).cxx_destruct;
- (id)description;

@end
