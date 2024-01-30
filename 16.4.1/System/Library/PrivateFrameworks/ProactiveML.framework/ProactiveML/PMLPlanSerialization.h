@interface PMLPlanSerialization : NSObject

+ (id)planFromData:(id)a0 store:(id)a1 trainingNetworkPath:(id)a2;
+ (id)planFromData:(id)a0 withArgs:(id)a1;
+ (id)planFromData:(id)a0 withStore:(id)a1;
+ (id)serializePlan:(id)a0;

- (id)init;

@end
