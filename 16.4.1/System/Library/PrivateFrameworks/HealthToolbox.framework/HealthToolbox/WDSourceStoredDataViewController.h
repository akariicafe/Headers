@class HKSource;

@interface WDSourceStoredDataViewController : WDStoredDataByCategoryViewController

@property (readonly, nonatomic) BOOL sourceIsInstalled;
@property (readonly, nonatomic) BOOL sourceHasData;
@property (retain, nonatomic) HKSource *source;

- (void).cxx_destruct;
- (void)deleteSource;
- (void)deleteAllSourceData;
- (void)deleteAllStoredData;
- (BOOL)shouldShowDeleteAllDataButton;
- (id)storedDataDisplayName;
- (id)storedDataPredicate;

@end
