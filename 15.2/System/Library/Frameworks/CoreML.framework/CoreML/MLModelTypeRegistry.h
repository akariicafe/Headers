@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (Class)loadNeuralNetworkClass:(BOOL)a0 trainWithMLCompute:(BOOL)a1;
- (Class)classForLoadingModelType:(int)a0;
- (Class)classForCompilingModelType:(int)a0;
- (id)init;
- (Class)classForLoadingModelType:(int)a0 isUpdatable:(BOOL)a1 trainWithMLCompute:(BOOL)a2;

@end
