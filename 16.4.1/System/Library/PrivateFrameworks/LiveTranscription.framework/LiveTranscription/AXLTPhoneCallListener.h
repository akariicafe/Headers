@class CXCallObserver, TUCallCenter, NSString;
@protocol AXLTPhoneCallListenerDelegate;

@interface AXLTPhoneCallListener : NSObject <CXCallObserverDelegate>

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) TUCallCenter *callCenter;
@property (weak, nonatomic) id<AXLTPhoneCallListenerDelegate> delegate;
@property (nonatomic) long long utilityType;
@property (readonly, nonatomic) BOOL isCallActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)callStatusChanged:(id)a0;
- (void)_startObserving;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
