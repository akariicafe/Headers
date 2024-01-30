@class NSCache, Logger;

@interface PSAppDataUsagePolicyCache : NSObject {
    Logger *_logger;
}

@property (retain, nonatomic) NSCache *policyCache;
@property (retain, nonatomic) struct __CTServerConnection { } *ctServerConnection;

+ (id)sharedInstance;

- (void)clearCache;
- (void)willEnterForeground;
- (id)getLogger;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)managedConfigurationSettingsDidChange;
- (void)managedConfigurationProfileListDidChange;
- (id)usagePolicyFor:(id)a0;
- (BOOL)setCellularUsagePolicy:(id)a0 forBundle:(id)a1;
- (BOOL)setUsagePoliciesForBundle:(id)a0 cellular:(BOOL)a1 wifi:(BOOL)a2;
- (void)handlePolicyChangedNotification;
- (id)fetchUsagePolicyFor:(id)a0;

@end
