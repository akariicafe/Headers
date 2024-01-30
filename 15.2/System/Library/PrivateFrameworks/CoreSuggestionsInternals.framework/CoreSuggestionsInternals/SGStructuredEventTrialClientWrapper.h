@class _PASLock;

@interface SGStructuredEventTrialClientWrapper : SGTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)supportedProviders;
- (id)engineConfig;
- (void)updateFactors;
- (id)baseModelName;
- (id)structuredEventInputMapping;
- (id)structuredEventOutputMapping;
- (BOOL)foundInMailNotifications;
- (id)notificationsAllowListOverride;

@end
