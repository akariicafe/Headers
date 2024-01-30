@class MNObserverHashTable, NSDate;
@protocol MNTimeProvider;

@interface MNTimeManager : NSObject {
    MNObserverHashTable *_timeManagerObservers;
}

@property (class, readonly, nonatomic) double currentTime;
@property (class, readonly, nonatomic) NSDate *currentDate;

@property (retain, nonatomic) id<MNTimeProvider> provider;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_resetToDefaultProvider;

@end
