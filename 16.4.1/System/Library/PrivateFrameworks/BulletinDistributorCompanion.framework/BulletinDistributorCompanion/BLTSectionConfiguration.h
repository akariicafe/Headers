@class NSString, BLTWatchKitAppList, NSCondition;
@protocol BLTSectionConfigurationDelegate;

@interface BLTSectionConfiguration : BLTSectionConfigurationInternal <BLTWatchKitAppListDelegate> {
    BLTWatchKitAppList *_watchKitAppList;
    NSCondition *_watchKitAppListLoadedCondition;
    BOOL _watchKitAppListLoaded;
}

@property (weak, nonatomic) id<BLTSectionConfigurationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_waitForWatchKitAppListLoaded;
- (id)initWithWatchKitAppList:(id)a0;
- (BOOL)override:(id)a0 appliesToConfigurationForSectionID:(id)a1;
- (BOOL)shouldSectionIDSettingsAlwaysSync:(id)a0;
- (void)watchKitAppList:(id)a0 added:(id)a1 removed:(id)a2;

@end
