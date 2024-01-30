@class HMAccessory, NSMutableArray, HFStaticItem;

@interface HUAccessoryDiagnosticsItemManager : HFItemManager

@property (retain, nonatomic) NSMutableArray *downloadedLogs;
@property (nonatomic) BOOL collectionInProgress;
@property (nonatomic) BOOL collectionFailed;
@property (readonly, nonatomic) HFStaticItem *generateLogsButtonItem;
@property (readonly, nonatomic) HFStaticItem *logCollectionFailedItem;
@property (readonly, nonatomic) HMAccessory *sourceAccessory;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)availableLogs;
- (void)_loadDownloadedLogs;
- (void)didChangeNotification:(id)a0;
- (void)recordDownloadedLog:(id)a0;
- (void)beginDiagnosticCollection;

@end
