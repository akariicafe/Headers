@class NSMutableDictionary;

@interface AMDModelStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *allTheModels;

- (void).cxx_destruct;
- (id)init;
- (id)modelForId:(id)a0;
- (id)getLocalModelWithId:(id)a0;
- (void)refreshModelWithId:(id)a0 andFormat:(id)a1 ifGreaterThanVersion:(short)a2 withDelegate:(id)a3;
- (short)getLatestVersionAvailableForModelWithId:(id)a0 andFormat:(id)a1 withURLBag:(id)a2;
- (void)downloadLatestModelWithId:(id)a0 andFormat:(id)a1 greaterThanVersion:(short)a2 withURLBag:(id)a3 withDelegate:(id)a4;
- (void)loadAllModels:(id)a0;
- (void)refreshModelWithId:(id)a0 andFormat:(id)a1 withDelegate:(id)a2;

@end
