@interface BWZoomRange : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) float lowerBound;
@property (readonly, nonatomic) float upperBound;
@property (readonly, nonatomic) float fudgedLowerBound;
@property (readonly, nonatomic) float fudgedUpperBound;

+ (id)zoomRangeWithLower:(float)a0 upperBound:(float)a1;
+ (id)fudgedZoomRangeWithLower:(float)a0 upperBound:(float)a1 fudgedLowerBound:(float)a2 fudgedUpperBound:(float)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)applyFudgeToZoomFactor:(float)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithLowerBound:(float)a0 upperBound:(float)a1;
- (id)initWithLowerBound:(float)a0 upperBound:(float)a1 fudgedLowerBound:(float)a2 fudgedUpperBound:(float)a3;

@end
