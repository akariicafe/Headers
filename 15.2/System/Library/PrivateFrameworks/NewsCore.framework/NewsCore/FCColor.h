@class NSString;

@interface FCColor : NSObject <NSCopying>

@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) NSString *hex;

+ (id)nullableColorWithHexString:(id)a0;
+ (id)clearColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)colorWithHexString:(id)a0;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)legibleColor;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isSimilarToColor:(id)a0 withinPercentage:(double)a1;
- (void)readDeconstructedRepresentationWithAcccessor:(id /* block */)a0;

@end
