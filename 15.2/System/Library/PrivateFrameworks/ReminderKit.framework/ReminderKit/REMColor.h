@class NSString;

@interface REMColor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *daSymbolicColorName;
@property (readonly, nonatomic) NSString *daHexString;
@property (readonly, nonatomic) NSString *ckSymbolicColorName;
@property (readonly, nonatomic) unsigned long long colorRGBSpace;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double alpha;

+ (id)redColor;
+ (id)grayColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)brownColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)purpleColor;
+ (id)clearColor;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)orangeColor;
+ (id)yellowColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)colorWithHexString:(id)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 targetRGBSpace:(unsigned long long)a4;
+ (id)colorWithDictionaryData:(id)a0 error:(id *)a1;

- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (id)hexString;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(unsigned long long)a4;
- (id)initWithHexString:(id)a0;
- (id)initWithDASymbolicColorName:(id)a0 daHexString:(id)a1 ckSymbolicColorName:(id)a2;
- (id)hexStringWithAlpha;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(unsigned long long)a4 daSymbolicColorName:(id)a5 daHexString:(id)a6 ckSymbolicColorName:(id)a7;
- (id)initWithDASymbolicColorName:(id)a0 daHexString:(id)a1;
- (id)initWithCKSymbolicColorName:(id)a0 hexString:(id)a1;
- (id)archivedDictionaryDataWithError:(id *)a0;

@end
