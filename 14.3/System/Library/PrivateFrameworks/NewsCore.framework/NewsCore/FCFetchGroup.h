@class NSDate, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface FCFetchGroup : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSDate *requestDate;
@property (readonly, copy, nonatomic) NSSet *keys;
@property (readonly, nonatomic) id context;
@property (readonly, nonatomic) BOOL shouldFilter;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) long long relativePriority;
@property (readonly, nonatomic) BOOL isUserFacing;
@property (nonatomic) unsigned long long numberOfFetchAttempts;

- (void).cxx_destruct;
- (void)fireCompletion;
- (long long)comparePriority:(id)a0;
- (id)initWithKeys:(id)a0 context:(id)a1 shouldFilter:(BOOL)a2 qualityOfService:(long long)a3 relativePriority:(long long)a4 completionQueue:(id)a5 completion:(id /* block */)a6;

@end
