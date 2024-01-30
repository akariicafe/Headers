@class NSSet, NSDateInterval, NSDictionary, NSNumber;

@interface HDSyncPredicate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *excludedSyncProvenances;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSSet *includedObjectTypes;
@property (readonly, copy, nonatomic) NSNumber *defaultMaximumObjectAge;
@property (readonly, copy, nonatomic) NSNumber *defaultMaximumTombstoneAge;
@property (readonly, copy, nonatomic) NSDictionary *maximumObjectAgeByType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExcludedSyncProvenances:(id)a0 dateInterval:(id)a1 includedObjectTypes:(id)a2 defaultMaximumObjectAge:(id)a3 defaultMaximumTombstoneAge:(id)a4 maximumObjectAgeByType:(id)a5;
- (id)maximumObjectAgeForType:(id)a0;

@end
