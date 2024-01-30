@class NSNumber, HKHealthStore;

@interface MTAgeObserver : NSObject

@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (nonatomic) int characteristicUpdateToken;

+ (id)age;
+ (id)sharedAgeObserver;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_registerForSignificantTimeChangeNotification;
- (void)checkForAgeChange;
- (id)_computeAge;

@end
