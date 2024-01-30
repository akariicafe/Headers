@class NSDictionary, DMFCommunicationPolicyMonitor;

@interface SBCommunicationPolicyManager : NSObject {
    NSDictionary *_policiesByBundleIdentifier;
    DMFCommunicationPolicyMonitor *_communicationPolicyMonitor;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
