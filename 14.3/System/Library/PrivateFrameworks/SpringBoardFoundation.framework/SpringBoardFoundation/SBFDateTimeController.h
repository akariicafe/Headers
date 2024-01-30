@class NSHashTable, NSDate;

@interface SBFDateTimeController : NSObject {
    NSHashTable *_observers;
}

@property (class, readonly, nonatomic) SBFDateTimeController *sharedInstance;

@property (readonly, copy, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) NSDate *overrideDate;
@property (nonatomic) double overrideDateOffset;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;

@end
