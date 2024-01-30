@class NSString, NSObject, MNObserverHashTable;
@protocol OS_dispatch_queue;

@interface MNNavdStateUpdater : NSObject <MNNavigationStateObserver> {
    MNObserverHashTable *_innerObservers;
    BOOL _hasObservers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUpdater;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)isNavigatingOrPredictingDestination;
- (BOOL)isNavigatingWithETA;
- (id)initPrivate;
- (void).cxx_destruct;
- (void)stateManager:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;

@end
