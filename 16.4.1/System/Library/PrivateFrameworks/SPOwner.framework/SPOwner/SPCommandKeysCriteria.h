@class NSNumber, NSArray, NSDateInterval;

@interface SPCommandKeysCriteria : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *sequence;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSArray *indices;
@property (copy, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSNumber *hint;

+ (id)matchPrimaryIndices:(id)a0;
+ (id)matchSequence:(unsigned char)a0 index:(unsigned int)a1 hint:(unsigned char)a2;
+ (id)matchDateInterval:(id)a0;
+ (id)matchSecondaryIndex:(unsigned long long)a0 hint:(unsigned char)a1;
+ (id)driftModeledCriteria;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 sequence:(id)a1 indices:(id)a2 index:(id)a3 hint:(id)a4;

@end
