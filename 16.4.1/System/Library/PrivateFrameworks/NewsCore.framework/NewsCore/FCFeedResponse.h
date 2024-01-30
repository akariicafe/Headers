@class FCFeedRange, NSString, NSArray, NSError;

@interface FCFeedResponse : NSObject

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSArray *feedItems;
@property (nonatomic) BOOL exhaustedRequestRange;
@property (copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) FCFeedRange *feedRange;

- (id)feedResponseByMergingWithResponse:(id)a0;
- (void).cxx_destruct;

@end
