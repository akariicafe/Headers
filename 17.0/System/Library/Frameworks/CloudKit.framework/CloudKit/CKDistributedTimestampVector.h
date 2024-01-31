@class NSMutableArray;

@interface CKDistributedTimestampVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *timestampArray;

- (unsigned long long)hash;
- (id)initWithTimestamps:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addTimestamp:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)timestamps;
- (void)mergeFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isGreaterThanOrEqualToTimestamp:(id)a0;
- (long long)compareToTimestampVector:(id)a0;
- (long long)indexForTimestampForSiteIdentifier:(id)a0;
- (id)initWithTimestampClockVector:(id)a0 fillingInGaps:(BOOL)a1;
- (id)minimalTimestampWith:(id)a0;
- (id)sequentialSiteIdentifiers;
- (id)timestampAtIndex:(unsigned long long)a0;
- (unsigned long long)timestampCount;
- (id)timestampForSiteIdentifier:(id)a0;

@end
