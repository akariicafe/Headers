@class SignpostCAProcessStallAggregation, NSDictionary;

@interface SignpostCAStallAggregation : NSObject <NSCopying>

@property (readonly, nonatomic) SignpostCAProcessStallAggregation *systemAggregation;
@property (readonly, nonatomic) NSDictionary *executablePathToStallAggregation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_addDuration:(unsigned long long)a0 ofType:(unsigned char)a1 procExecutablePath:(id)a2 responsiblePID:(int)a3 aggregateForSystem:(BOOL)a4;
- (void)_addSystemDuration:(unsigned long long)a0 ofType:(unsigned char)a1;

@end
