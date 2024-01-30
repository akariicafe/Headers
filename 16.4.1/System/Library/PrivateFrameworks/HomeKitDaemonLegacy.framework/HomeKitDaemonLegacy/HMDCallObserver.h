@class CXCallObserver, NSString;

@interface HMDCallObserver : HMFObject <CXCallObserverDelegate>

@property (class, readonly) HMDCallObserver *sharedObserver;

@property (readonly) CXCallObserver *observer;
@property (readonly) BOOL hasActiveCalls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isActiveCall:(id)a0;

@end
