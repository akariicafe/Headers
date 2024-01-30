@class NSString, NSArray, NSSet, NSDateComponents, NSDate, HKUnit;

@interface ACHTemplate : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } _packedVisibilityStart;
    struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } _packedVisibilityEnd;
    struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } _packedAvailabilityStart;
    struct { unsigned short year; unsigned char month; unsigned char day; BOOL valid; } _packedAvailabilityEnd;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long key;
@property (retain, nonatomic) NSString *uniqueName;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned char minimumEngineVersion;
@property (retain, nonatomic) NSDate *createdDate;
@property (nonatomic) unsigned char creatorDevice;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *predicate;
@property (retain, nonatomic) NSString *gracePredicate;
@property (retain, nonatomic) NSString *valueExpression;
@property (retain, nonatomic) NSString *graceValueExpression;
@property (retain, nonatomic) NSString *progressExpression;
@property (retain, nonatomic) NSString *graceProgressExpression;
@property (retain, nonatomic) NSString *goalExpression;
@property (retain, nonatomic) NSString *graceGoalExpression;
@property (nonatomic) unsigned long long triggers;
@property (nonatomic) unsigned char earnLimit;
@property (retain, nonatomic) NSString *visibilityPredicate;
@property (retain, nonatomic) NSString *graceVisibilityPredicate;
@property (retain, nonatomic) NSDateComponents *visibilityStart;
@property (retain, nonatomic) NSDateComponents *visibilityEnd;
@property (retain, nonatomic) NSString *availabilityPredicate;
@property (retain, nonatomic) NSDateComponents *availabilityStart;
@property (retain, nonatomic) NSDateComponents *availabilityEnd;
@property (retain, nonatomic) NSArray *availableCountryCodes;
@property (retain, nonatomic) NSString *alertabilityPredicate;
@property (retain, nonatomic) NSSet *alertDates;
@property (nonatomic) unsigned char duplicateRemovalStrategy;
@property (nonatomic) unsigned long long duplicateRemovalCalendarUnit;
@property (nonatomic) unsigned char earnDateStrategy;
@property (retain, nonatomic) HKUnit *canonicalUnit;
@property (nonatomic) unsigned long long displayOrder;
@property (nonatomic) BOOL displaysEarnedInstanceCount;
@property (retain, nonatomic) NSArray *availableSuffixes;
@property (nonatomic) BOOL availableOnPairedDevice;
@property (nonatomic) unsigned long long mobileAssetVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCodable:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)_displayStringForStringValues:(id)a0;
- (id)_displayStringForAlertDates:(id)a0;

@end
