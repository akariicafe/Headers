@class NSNumber;

@interface _DPValueRange : NSObject

@property (readonly, nonatomic) NSNumber *minPossible;
@property (readonly, nonatomic) NSNumber *maxPossible;
@property (readonly, nonatomic) NSNumber *range;

+ (id)rangeWithMin:(id)a0 max:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithMin:(id)a0 max:(id)a1;
- (BOOL)isEqualToValueRange:(id)a0;

@end
