@interface ObjectComparisonByTokens : NSObject

@property (nonatomic) unsigned long long sameTokensCount;
@property (nonatomic) unsigned long long diffTokensCount;
@property (nonatomic) unsigned long long distance;
@property (retain, nonatomic) id obj1;
@property (retain, nonatomic) id obj2;
@property (retain, nonatomic) id reference;

+ (BOOL)addComparison:(id)a0 to:(id)a1 ifMinOverlap:(unsigned long long)a2;

- (id)description;
- (void).cxx_destruct;
- (void)accountForadditionalLength;
- (void)incrementDistanceWith:(unsigned long long)a0;
- (void)incrementTokensWith:(BOOL)a0;
- (id)initWithObj1:(id)a0 obj2:(id)a1 reference:(id)a2;

@end
