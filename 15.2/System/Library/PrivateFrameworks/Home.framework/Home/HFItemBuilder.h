@class HMHome;

@interface HFItemBuilder : NSObject

@property (readonly, nonatomic) id homeKitRepresentation;
@property (readonly, nonatomic) HMHome *home;

+ (Class)homeKitRepresentationClass;

- (id)initWithHome:(id)a0;
- (void)setHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)commitItem;
- (id)verifyProperty:(id)a0 matchesCondition:(id /* block */)a1 description:(id)a2;
- (id)_commitSetDiff:(id)a0 withBlock:(id /* block */)a1;
- (id)commitSetDiff:(id)a0 addBlock:(id /* block */)a1 updateBlock:(id /* block */)a2 deleteBlock:(id /* block */)a3;
- (id)verifyPropertyIsSet:(id)a0;
- (id)_failureFutureWithReason:(id)a0;
- (void)setHomeKitRepresentation:(id)a0;
- (id)commitItemBuilderSetDiff:(id)a0 addBlock:(id /* block */)a1 deleteBlock:(id /* block */)a2;
- (id)verifyPropertiesAreSet:(id)a0;
- (id)verifyNameIsNotEmpty:(id)a0;

@end
