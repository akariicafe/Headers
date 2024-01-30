@class NSCache;

@interface PSAppDataUsagePolicyCache : NSObject

@property (retain, nonatomic) NSCache *policyCache;
@property (retain, nonatomic) struct __CTServerConnection { } *ctServerConnection;

+ (id)sharedInstance;

- (void)clearCache;
- (id)initPrivate;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willEnterForeground;
- (void)managedConfigurationSettingsDidChange;
- (void)managedConfigurationProfileListDidChange;
- (id)usagePolicyFor:(id)a0;
- (BOOL)setCellularUsagePolicy:(id)a0 forBundle:(id)a1;
- (BOOL)setUsagePoliciesForBundle:(id)a0 cellular:(BOOL)a1 wifi:(BOOL)a2;
- (void)handlePolicyChangedNotification;
- (id)fetchUsagePolicyFor:(id)a0;

@end
