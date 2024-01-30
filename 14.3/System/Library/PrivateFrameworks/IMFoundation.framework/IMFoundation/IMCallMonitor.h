@class NSString, CXCallObserver, NSDate;

@interface IMCallMonitor : NSObject <CXCallObserverDelegate> {
    CXCallObserver *_callCenter;
    BOOL _wasOnCall;
}

@property (readonly, nonatomic) BOOL isOnCall;
@property (readonly, retain, nonatomic) NSDate *dateLastCallEnded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)callObserver:(id)a0 callChanged:(id)a1;

@end
