@class NSString, CXCallObserver, NSDate;

@interface IMCallMonitor : NSObject <CXCallObserverDelegate> {
    CXCallObserver *_callCenter;
    BOOL _wasOnCall;
}

@property (readonly, nonatomic) BOOL isOnCall;
@property (readonly, nonatomic) BOOL isOnTelephonyCall;
@property (readonly, retain, nonatomic) NSDate *dateLastCallEnded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
