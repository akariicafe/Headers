@class CXCallObserver, NSString;

@interface JFXCaptureCallObserver : NSObject <CXCallObserverDelegate>

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (readonly, nonatomic) long long callCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)callObserver:(id)a0 callChanged:(id)a1;

@end
