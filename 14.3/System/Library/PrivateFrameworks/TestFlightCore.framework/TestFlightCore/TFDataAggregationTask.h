@class NSString, NSArray;

@interface TFDataAggregationTask : NSObject

@property (copy, nonatomic) id /* block */ loadDataBlock;
@property (copy, nonatomic) id /* block */ extractValuesBlock;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *logKey;
@property (readonly, copy, nonatomic) NSArray *providedEntryIdentifiers;

+ (id)deviceInfoTask;
+ (id)_readableRATStringFromCTRadioAccessTechnology:(id)a0;
+ (id)_readableNetworkConnectionTypStringFromNWPath:(id)a0;
+ (id)networkInfoTask;
+ (id)sessionInfoTaskForIdentifier:(id)a0;
+ (id)watchInfoTask;
+ (id)regionInfoTask;
+ (id)snapshotTasksForSession:(id)a0;
+ (id)anytimeTasksForSession:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 providedEntryIdentifiers:(id)a1;
- (void)extractDataPropertiesFromData:(id)a0 intoDataContainer:(id)a1;
- (void)loadDataOnQueue:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
