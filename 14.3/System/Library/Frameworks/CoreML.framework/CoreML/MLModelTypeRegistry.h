@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (Class)loadNeuralNetworkClass:(BOOL)a0;
- (id)init;
- (Class)classForLoadingModelType:(int)a0;
- (Class)classForLoadingModelType:(int)a0 isUpdatable:(BOOL)a1;
- (Class)classForCompilingModelType:(int)a0;

@end
