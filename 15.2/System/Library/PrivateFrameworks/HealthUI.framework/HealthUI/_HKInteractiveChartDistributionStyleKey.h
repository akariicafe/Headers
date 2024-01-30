@class NSString;

@interface _HKInteractiveChartDistributionStyleKey : NSObject <NSCopying>

@property (nonatomic) long long style;
@property (nonatomic) long long timeScope;
@property (retain, nonatomic) NSString *predicateName;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDistributionStyle:(long long)a0 timeScope:(long long)a1 predicateName:(id)a2;

@end
