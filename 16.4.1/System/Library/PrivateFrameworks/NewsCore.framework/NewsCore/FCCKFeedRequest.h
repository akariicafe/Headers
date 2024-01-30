@class NSString, NSData;

@interface FCCKFeedRequest : NSObject {
    NSString *_feedID;
    NSData *_startCursor;
    unsigned long long _startOrder;
    unsigned long long _orderLimit;
    unsigned long long _softResultsLimit;
    unsigned long long _hardResultsLimit;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
