@class RTMapItem;

@interface RTInferredMapItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTMapItem *mapItem;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) unsigned long long source;

+ (BOOL)hasKnownTypeItem:(id)a0;
+ (id)dedupeInferredMapItems:(id)a0;
+ (double)consolidatedConfidenceFromConfidences:(id)a0;
+ (unsigned long long)consolidatedSourceFromInferredMapItems:(id)a0;
+ (id)heaviestMapItemFrom:(id)a0 closestToLocation:(id)a1 distanceCalculator:(id)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapItem:(id)a0 confidence:(double)a1 source:(unsigned long long)a2;

@end
