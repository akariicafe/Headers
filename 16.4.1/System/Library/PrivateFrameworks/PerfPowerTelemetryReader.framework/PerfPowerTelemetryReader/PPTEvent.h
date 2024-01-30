@class NSString, NSMutableDictionary, NSDictionary, NSDate, NSArray;

@interface PPTEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double timeOffset;
@property (copy) NSMutableDictionary *metrics;
@property (readonly) NSDate *timestamp;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionary;
@property (readonly) double epochTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *metricKeys;
@property (readonly, copy) NSArray *metricValues;
@property (readonly, copy) NSDictionary *metricKeysAndValues;
@property (readonly) double monotonicTimestamp;

+ (id)eventWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 andDictionary:(id)a2;
+ (id)eventWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 andValues:(id)a2 forKeys:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEvent:(id)a0;
- (BOOL)isEqualToEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (long long)compare:(id)a0;
- (id)JSONRepresentation;
- (void).cxx_destruct;
- (id)initWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 andDictionary:(id)a2;
- (id)initWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 andValues:(id)a2 forKeys:(id)a3;
- (id)metricValueForKey:(id)a0;
- (id)metricValuesForKeys:(id)a0 notFoundMarker:(id)a1;

@end
