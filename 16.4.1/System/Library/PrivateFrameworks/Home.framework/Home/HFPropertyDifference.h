@interface HFPropertyDifference : HFDifference

@property (retain, nonatomic) id valueA;
@property (retain, nonatomic) id valueB;

+ (id)compareObjectA:(id)a0 toObjectB:(id)a1 key:(id)a2 priority:(unsigned long long)a3;
+ (BOOL)object:(id)a0 isEqualToObject:(id)a1;

- (id)descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithObjectA:(id)a0 toObjectB:(id)a1 key:(id)a2 priority:(unsigned long long)a3;

@end
