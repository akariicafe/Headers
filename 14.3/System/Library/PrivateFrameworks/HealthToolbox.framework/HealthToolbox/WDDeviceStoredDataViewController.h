@class NSString, HKDevice;

@interface WDDeviceStoredDataViewController : WDStoredDataByCategoryViewController

@property (retain, nonatomic) HKDevice *device;
@property (retain, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)storedDataPredicate;
- (id)storedDataDisplayName;
- (BOOL)shouldShowDeleteAllDataButton;
- (void)deleteAllStoredData;

@end
