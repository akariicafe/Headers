@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (id)classesForLoadingModelType:(int)a0 isUpdatable:(BOOL)a1 trainWithMLCompute:(BOOL)a2;
- (id)init;
- (Class)classForCompilingModelType:(int)a0;
- (id)classesForLoadingModelType:(int)a0;
- (id)loadNeuralNetworkClasses:(BOOL)a0 trainWithMLCompute:(BOOL)a1;

@end
