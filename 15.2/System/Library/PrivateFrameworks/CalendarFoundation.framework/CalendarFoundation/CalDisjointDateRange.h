@class NSMutableSet;

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSMutableSet *distinctRanges;

+ (id)disjointRangeWithDistinctRanges:(id)a0;
+ (id)disjointRangeWithSingleRange:(id)a0;

- (BOOL)containsRange:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)totalDuration;
- (id)addRange:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)intersectsRange:(id)a0;
- (id)intersectionWithRange:(id)a0;
- (id)subtractRange:(id)a0;
- (id)initWithDistinctRanges:(id)a0;
- (id)sortedDistinctRanges;
- (id)addDisjointRange:(id)a0;
- (id)subtractDisjointRange:(id)a0;
- (id)intersectionWithDisjointRange:(id)a0;

@end
