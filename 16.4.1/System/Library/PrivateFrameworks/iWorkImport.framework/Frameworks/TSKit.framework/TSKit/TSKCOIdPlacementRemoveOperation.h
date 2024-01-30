@class NSString;

@interface TSKCOIdPlacementRemoveOperation : TSKCOIdPlacementBaseOperation <TSKCOObjectCountConstraint>

@property (readonly, nonatomic) int objectCount;
@property (readonly, nonatomic) int objectCounterSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)placementType;
- (BOOL)isEqual:(id)a0;
- (id)toString;
- (void)saveToArchiver:(id)a0 message:(void *)a1;
- (id)initWithAddress:(const void *)a0 fromIndex:(int)a1;
- (id)initWithAddress:(const void *)a0 fromIndex:(int)a1 noop:(BOOL)a2 objectCount:(int)a3 objectCounterSpace:(int)a4;
- (id)initWithAddress:(const void *)a0 fromIndex:(int)a1 objectCount:(int)a2 objectCounterSpace:(int)a3;
- (id)initWithAddress:(const void *)a0 fromIndex:(int)a1 toIndex:(int)a2 dominating:(BOOL)a3 noop:(BOOL)a4;
- (id)initWithAddress:(const void *)a0 fromIndex:(int)a1 toIndex:(int)a2 dominating:(BOOL)a3 noop:(BOOL)a4 objectCount:(int)a5 objectCounterSpace:(int)a6;
- (id)initWithUUIDPath:(id)a0 fromIndex:(int)a1;
- (id)initWithUnarchiver:(id)a0 message:(const void *)a1;
- (struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; })newTransformableOperation;
- (id)operationWithNewNoop:(BOOL)a0;

@end
