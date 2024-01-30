@class NSString;

@interface FCColor : NSObject <NSCopying>

@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) NSString *hex;

+ (id)nullableColorWithHexString:(id)a0;
+ (id)whiteColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)clearColor;
+ (id)colorWithPBColor:(id)a0;
+ (id)colorWithHexString:(id)a0;
+ (id)blackColor;

- (void)readDeconstructedRepresentationWithAcccessor:(id /* block */)a0;
- (id)init;
- (id)pbColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)legibleColor;
- (BOOL)isEqual:(id)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (BOOL)isSimilarToColor:(id)a0 withinPercentage:(double)a1;

@end
