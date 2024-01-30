@class SignpostCAProcessStallAggregation, NSDictionary;

@interface SignpostCAStallAggregation : NSObject <NSCopying>

@property (readonly, nonatomic) SignpostCAProcessStallAggregation *systemAggregation;
@property (readonly, nonatomic) NSDictionary *executablePathToStallAggregation;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)_addSystemDuration:(unsigned long long)a0 ofType:(unsigned char)a1;
- (void)_addDuration:(unsigned long long)a0 ofType:(unsigned char)a1 procExecutablePath:(id)a2 responsiblePID:(int)a3 aggregateForSystem:(BOOL)a4;

@end
