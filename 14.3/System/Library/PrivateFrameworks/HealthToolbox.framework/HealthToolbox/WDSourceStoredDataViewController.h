@class HKSource;

@interface WDSourceStoredDataViewController : WDStoredDataByCategoryViewController

@property (readonly, nonatomic) BOOL sourceIsInstalled;
@property (readonly, nonatomic) BOOL sourceHasData;
@property (retain, nonatomic) HKSource *source;

- (void).cxx_destruct;
- (id)storedDataPredicate;
- (id)storedDataDisplayName;
- (BOOL)shouldShowDeleteAllDataButton;
- (void)deleteAllStoredData;
- (void)deleteSource;
- (void)deleteAllSourceData;

@end
