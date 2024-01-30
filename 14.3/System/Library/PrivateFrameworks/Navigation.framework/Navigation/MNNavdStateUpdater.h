@class NSString, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface MNNavdStateUpdater : NSObject <MNNavigationStateObserver> {
    NSHashTable *_innerObservers;
    BOOL _hasObservers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUpdater;

- (id)initPrivate;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)stateManager:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (BOOL)isNavigatingOrPredictingDestination;
- (BOOL)isNavigatingWithETA;

@end
