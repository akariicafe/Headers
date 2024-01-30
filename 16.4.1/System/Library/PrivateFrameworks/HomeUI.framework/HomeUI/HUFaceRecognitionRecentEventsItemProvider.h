@class HMHome, NSMutableSet, NSDateInterval;

@interface HUFaceRecognitionRecentEventsItemProvider : HFItemProvider

@property (class, readonly, copy, nonatomic) id /* block */ cameraSignificantEventDateComparator;

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSMutableSet *personItems;
@property (retain, nonatomic) NSDateInterval *dateRange;
@property (nonatomic) unsigned long long fetchLimit;

+ (id)_coalescedItems:(id)a0;
+ (BOOL)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end
