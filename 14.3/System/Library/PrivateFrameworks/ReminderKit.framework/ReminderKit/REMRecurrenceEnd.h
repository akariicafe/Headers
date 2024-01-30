@class NSDate;

@interface REMRecurrenceEnd : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long occurrenceCount;

+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)a0;
+ (id)recurrenceEndWithEndDate:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)usesEndDate;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithOccurrenceCount:(unsigned long long)a0;
- (id)initWithEndDate:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
