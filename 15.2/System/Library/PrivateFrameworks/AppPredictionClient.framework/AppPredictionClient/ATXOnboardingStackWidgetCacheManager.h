@class NSString, BMAppLaunchStream, ATXAvocadoDescriptorCache;

@interface ATXOnboardingStackWidgetCacheManager : NSObject {
    NSString *_cachePath;
    BMAppLaunchStream *_appLaunchStream;
    ATXAvocadoDescriptorCache *_descriptorCache;
    unsigned long long _max3PWidgetsToSerialize;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPath:(id)a0 appLaunchStream:(id)a1 descriptorCache:(id)a2 max3PWidgetsToSerialize:(unsigned long long)a3;
- (id)_mapDescriptorsToAppLaunchData:(id)a0 error:(id *)a1;
- (id)_hasiCloudFamily;
- (id)_sortAndFilterOutLeastUsed3PWidgets:(id)a0;
- (BOOL)_writeOnboardingWidgetStackCache:(id)a0 withError:(id *)a1;
- (id)_splitDescriptorsIntoFirstPartyAndThirdParty:(id)a0;
- (void)_sortWidgetsByDistinctDaysAppWasLaunched:(id)a0 withAppLaunchDictionary:(id)a1;
- (id)updateCacheWithActivity:(id)a0;
- (id)fetchOnboardingStackWidgetCacheWithError:(id *)a0;

@end
