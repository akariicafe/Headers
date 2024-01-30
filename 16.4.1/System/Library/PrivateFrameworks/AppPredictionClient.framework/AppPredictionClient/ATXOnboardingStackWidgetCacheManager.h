@class NSString, BMAppLaunchStream;

@interface ATXOnboardingStackWidgetCacheManager : NSObject {
    NSString *_cachePath;
    BMAppLaunchStream *_appLaunchStream;
    unsigned long long _max3PWidgetsToSerialize;
}

- (id)init;
- (void).cxx_destruct;
- (id)_mapDescriptorsToAppLaunchData:(id)a0 descriptorCache:(id)a1 error:(id *)a2;
- (id)_sortAndFilterOutLeastUsed3PWidgets:(id)a0;
- (void)_sortWidgetsByDistinctDaysAppWasLaunched:(id)a0 withAppLaunchDictionary:(id)a1;
- (id)_splitDescriptorsIntoFirstPartyAndThirdParty:(id)a0;
- (BOOL)_writeOnboardingWidgetStackCache:(id)a0 withError:(id *)a1;
- (id)fetchOnboardingStackWidgetCacheWithError:(id *)a0;
- (id)initWithPath:(id)a0 appLaunchStream:(id)a1 max3PWidgetsToSerialize:(unsigned long long)a2;
- (id)updateCacheWithActivity:(id)a0;

@end
