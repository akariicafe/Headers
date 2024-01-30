@class NSDictionary;

@interface DESBundleRegistry : NSObject {
    NSDictionary *_bundleMap;
}

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)evaluatorForBundleId:(id)a0 error:(id *)a1;
- (id)supportedRecordTypesForBundleId:(id)a0;
- (unsigned long long)maximumNumberOfRecordsForBundleId:(id)a0;
- (id)supportedCoreDuetEventStreamNamesForBundleId:(id)a0;
- (id)_init;
- (id)coreDuetEventQueryForBundleId:(id)a0;
- (unsigned long long)daysToExpirationOfRecordsForBundleId:(id)a0;
- (BOOL)containsBundleId:(id)a0;
- (id)allBundleIds;

@end
