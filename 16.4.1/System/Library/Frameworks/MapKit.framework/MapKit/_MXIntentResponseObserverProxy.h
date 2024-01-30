@class NSString;
@protocol _MXIntentResponseObserver;

@interface _MXIntentResponseObserverProxy : NSObject <INIntentResponseObserver>

@property (weak, nonatomic) id<_MXIntentResponseObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopObserving;
- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveError:(id)a0;
- (void)intentResponseDidUpdate:(id)a0;
- (void)intentResponseDidUpdate:(id)a0 withSerializedCacheItems:(id)a1;

@end
