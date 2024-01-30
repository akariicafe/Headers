@class NSString, CSSearchableIndex, CSDataWrapper, NSData;

@interface CSSearchableIndexRequest : NSObject

@property (retain, nonatomic) CSSearchableIndex *index;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CSDataWrapper *dataWrapper;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) _Atomic unsigned int requestID;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL throttled;
@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) BOOL shouldThrottle;
@property (readonly, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ performBlock;
@property (copy, nonatomic) id /* block */ completionDataBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (void)initialize;

- (void)_finishWithError:(id)a0;
- (void)finishWithError:(id)a0;
- (void)_perform;
- (void)_throttleIfNecessary;
- (void)retryIfNecessaryWithError:(id)a0 dataWrapper:(id)a1;
- (id)description;
- (void)start;
- (void)_unthrottleIfNecessary;
- (void).cxx_destruct;
- (void)dealloc;
- (void)retryIfNecessaryWithError:(id)a0;
- (id)initWithSearchableIndex:(id)a0 label:(id)a1;

@end
