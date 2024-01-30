@class NSNumber;

@interface _DPValueRange : NSObject

@property (readonly, nonatomic) NSNumber *minPossible;
@property (readonly, nonatomic) NSNumber *maxPossible;
@property (readonly, nonatomic) NSNumber *range;

+ (id)rangeWithMin:(id)a0 max:(id)a1;

- (BOOL)isEqualToValueRange:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMin:(id)a0 max:(id)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
