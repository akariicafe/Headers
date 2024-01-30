@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation

@property (readonly, nonatomic) int fromIndex;
@property (readonly, nonatomic) int toIndex;
@property (readonly, nonatomic) int placementType;
@property (readonly, nonatomic) BOOL isDominating;

+ (id)stringForPlacementType:(int)a0;

- (id)toString;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)saveToArchiver:(id)a0 message:(void *)a1;
- (id)initWithAddress:(const void *)a0 fromIndex:(int)a1 toIndex:(int)a2 dominating:(BOOL)a3 noop:(BOOL)a4;
- (id)initWithUnarchiver:(id)a0 message:(const void *)a1;
- (id)operationWithNewNoop:(BOOL)a0;
- (id)initWithAddress:(const void *)a0 fromIndex:(int)a1 toIndex:(int)a2;

@end
