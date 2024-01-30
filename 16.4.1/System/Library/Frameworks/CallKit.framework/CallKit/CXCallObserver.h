@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, CXCallObserverDelegate, CXCallObserverDataSource;

@interface CXCallObserver : NSObject <CXCallObserverDataSourceDelegate>

@property (weak, nonatomic) id<CXCallObserverDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly, nonatomic) id<CXCallObserverDataSource> dataSource;
@property (readonly, copy, nonatomic) NSArray *calls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)_performDelegateCallback:(id /* block */)a0;
- (void)dataSource:(id)a0 callChanged:(id)a1;
- (id)initWithDataSource:(id)a0 concurrentQueue:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
