@class NSMutableArray, NSMutableSet;

@interface CKDistributedTimestampVector : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *timestampArray;
@property (retain, nonatomic) NSMutableSet *unorderedTimestampSet;

- (id)initWithIdentifiers:(id)a0;
- (id)identifiers;
- (id)timestamps;
- (void)encodeWithCoder:(id)a0;
- (id)identifierAtIndex:(unsigned long long)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addTimestamp:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTimestamps:(id)a0;
- (unsigned long long)identifierCount;
- (id)timestampAtIndex:(unsigned long long)a0;
- (unsigned long long)timestampCount;
- (id)timestampForSiteIdentifier:(id)a0;
- (long long)indexForTimestampForSiteIdentifier:(id)a0;
- (id)unorderedTimestamps;
- (id)sequentialSiteIdentifiers;
- (BOOL)_isGreaterThanOrEqualToTimestamp:(id)a0;
- (long long)compareToTimestampVector:(id)a0;
- (id)identifierForSiteIdentifier:(id)a0;
- (id)unorderedIdentifiers;
- (id)rangeWithSubtractedTimestamp:(id)a0;
- (id)minimalTimestampWith:(id)a0;

@end
