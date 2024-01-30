@class HKWorkout, NSArray;

@interface HKLocationReadings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isSmoothed;
@property (readonly, nonatomic) HKWorkout *workout;
@property (readonly, nonatomic) NSArray *allValidLocations;
@property (readonly, nonatomic) NSArray *inOrderLocationArrays;
@property (readonly, nonatomic) double averageSpeed;
@property (readonly, nonatomic) double topSpeed;
@property (readonly, nonatomic) double bottomSpeed;

- (id)firstObject;
- (id)lastObject;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)count;
- (id)debugDescription;
- (void)_filterLocationsByActiveTimePeriod:(id)a0;
- (void)_calculateSpeeds;
- (id)initWithLocations:(id)a0 workout:(id)a1 isSmoothed:(BOOL)a2;
- (id)initWithLocation:(id)a0 workout:(id)a1;

@end
