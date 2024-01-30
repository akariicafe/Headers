@class NSString;

@interface AAUIDataclassMergeActionPicker : ACUIDataclassActionPicker

@property (nonatomic, setter=setPerformingBatchMerge:) BOOL isPerformingBatchMerge;
@property (nonatomic, setter=setTetheredSyncingEnabled:) BOOL isTetheredSyncingEnabled;
@property (nonatomic, setter=setAnotherAccountIsSyncingDataclass:) BOOL isAnotherAccountSyncingDataclass;
@property (nonatomic, setter=setDataclassIsSyncingUsingExchangeOnly:) BOOL isDataclassSyncingUsingExchangeOnly;
@property (nonatomic) BOOL localStoreHasReadOnlyCalendars;
@property (nonatomic) NSString *tetheredSyncingSource;

- (id)message;
- (id)title;
- (id)descriptionForDataclassAction:(id)a0;

@end
