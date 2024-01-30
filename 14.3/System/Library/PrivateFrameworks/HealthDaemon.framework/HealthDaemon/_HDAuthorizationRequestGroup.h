@class NSString, HKSource, NSMutableSet, NSUUID, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface _HDAuthorizationRequestGroup : NSObject

@property (retain, nonatomic) NSMutableArray *requests;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sessionTimeoutSource;
@property (readonly, copy, nonatomic) HKSource *source;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSMutableSet *typesToWrite;
@property (readonly, copy, nonatomic) NSMutableSet *typesToRead;
@property (readonly, nonatomic) NSUUID *promptSessionIdentifier;
@property (readonly, nonatomic) unsigned long long requestCount;
@property (nonatomic, getter=isInTransaction) BOOL inTransaction;
@property (copy, nonatomic) id /* block */ promptHandler;

- (void)beginTransaction;
- (id)initWithSource:(id)a0;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (void)addRequest:(id)a0;
- (void)cancelRequestsWithIdentifiers:(id)a0 error:(id)a1;
- (BOOL)promptIfNecessaryWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)finishRequestsWithError:(id)a0;
- (void)_cancelTimeoutSource;

@end
