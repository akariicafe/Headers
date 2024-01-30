@class MNObserverHashTable, NSDate;
@protocol MNTimeProvider;

@interface MNTimeManager : NSObject {
    MNObserverHashTable *_timeManagerObservers;
}

@property (class, readonly, nonatomic) double currentTime;
@property (class, readonly, nonatomic) NSDate *currentDate;

@property (retain, nonatomic) id<MNTimeProvider> provider;

+ (id)sharedManager;

- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_resetToDefaultProvider;

@end
