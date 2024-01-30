@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFPineBoardSystemStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_pineBoardStateGroup;
    long long _pineBoardStateGroupDepth;
    NSHashTable *_listeners;
    BOOL _isObserving;
}

@property (readonly, nonatomic) long long pineBoardSystemState;

+ (id)defaultObserver;

- (void)removeListener:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)_endGroup;
- (void)_startObservingPineBoardSystemState;
- (void)_handlePineBoardStateChange:(long long)a0;
- (void)addListener:(id)a0;
- (void).cxx_destruct;
- (void)_beginGroup;
- (void)_stopObservingPineBoardSystemState;

@end
