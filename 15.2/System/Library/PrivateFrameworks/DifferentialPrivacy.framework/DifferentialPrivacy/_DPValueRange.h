@class NSNumber;

@interface _DPValueRange : NSObject

@property (readonly, nonatomic) NSNumber *minPossible;
@property (readonly, nonatomic) NSNumber *maxPossible;
@property (readonly, nonatomic) NSNumber *range;

+ (id)rangeWithMin:(id)a0 max:(id)a1;

- (id)initWithMin:(id)a0 max:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToValueRange:(id)a0;

@end
