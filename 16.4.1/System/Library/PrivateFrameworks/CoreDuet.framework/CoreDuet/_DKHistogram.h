@class NSUUID, NSString, NSDateInterval, NSMutableDictionary, NSArray, _DKEventStream;

@interface _DKHistogram : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSString *customIdentifier;
@property (retain, nonatomic) NSDateInterval *interval;
@property (retain, nonatomic) NSMutableDictionary *histogram;
@property (nonatomic) unsigned long long countOverAllValues;
@property (retain, nonatomic) _DKEventStream *stream;
@property (retain, nonatomic) NSArray *deviceIdentifiers;

+ (id)entityName;

- (id)insertInManagedObjectContext:(id)a0;
- (void)subtractHistogram:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_addPropertiesFrom:(id)a0;
- (void)addValue:(id)a0;
- (double)countForValueDouble:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)relativeFrequencyForValue:(id)a0;
- (unsigned long long)countForValue:(id)a0;
- (void)addHistogram:(id)a0 decayingExistingCounts:(double)a1;
- (void)addValue:(id)a0 withCount:(double)a1;
- (id)countDictionary;
- (BOOL)isEqual:(id)a0;
- (id)initWithHistogram:(id)a0;
- (id)init;
- (void)addHistogram:(id)a0;
- (id)description;
- (id)initWithManagedObject:(id)a0;
- (id)initWithValues:(id)a0;
- (void).cxx_destruct;
- (void)subtractValue:(id)a0;

@end
