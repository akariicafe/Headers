@class NSDate, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface FCFetchGroup : NSObject {
    BOOL _shouldFilter;
    BOOL _isUserFacing;
    NSSet *_keys;
    id _context;
    long long _qualityOfService;
    long long _relativePriority;
    unsigned long long _numberOfFetchAttempts;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSDate *requestDate;

- (void).cxx_destruct;
- (long long)comparePriority:(id)a0;

@end
