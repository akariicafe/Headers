@class CXCallObserver, NSString;

@interface RTAIDCallObserver : NSObject <CXCallObserverDelegate>

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (copy, nonatomic) id /* block */ callReporterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)initWithCallReporterBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
