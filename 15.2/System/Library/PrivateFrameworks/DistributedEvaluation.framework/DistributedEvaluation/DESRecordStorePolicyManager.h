@class DESBundleRegistry, NSURL;

@interface DESRecordStorePolicyManager : NSObject {
    DESBundleRegistry *_bundleRegistry;
    NSURL *_policyFileURL;
}

+ (id)sharedInstance;
+ (void)initialize;

- (id)arrayOfStringForPlugin:(id)a0 key:(id)a1 defaultValue:(id)a2;
- (unsigned long long)daysToExpirationOfRecordsForPluginID:(id)a0;
- (id)coreDuetEventQueryForPluginID:(id)a0;
- (id)policyForPluginID:(id)a0;
- (unsigned long long)maximumNumberOfRecordsForPluginID:(id)a0;
- (unsigned long long)unsignedIntegerForPluginID:(id)a0 key:(id)a1 defaultValue:(unsigned long long)a2;
- (id)stringForPluginID:(id)a0 key:(id)a1 defaultValue:(id)a2;
- (void).cxx_destruct;
- (id)policyForNSExtensionPluginID:(id)a0;
- (id)supportedRecordTypesForPluginID:(id)a0;
- (id)coreDuetPredicateForPluginID:(id)a0;
- (unsigned long long)coreDuetEventLimitForPluginID:(id)a0;
- (id)initWithBundleRegistry:(id)a0 policyFileURL:(id)a1;
- (id)supportedCoreDuetEventStreamNamesForPluginID:(id)a0;

@end
