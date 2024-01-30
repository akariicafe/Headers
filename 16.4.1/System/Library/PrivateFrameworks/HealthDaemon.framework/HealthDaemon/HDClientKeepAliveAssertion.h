@class NSString, NSDictionary, NSDate;

@interface HDClientKeepAliveAssertion : HDAssertion {
    long long _launchCount;
    NSDate *_lastLaunchAttempt;
    NSString *_clientBundleIdentifier;
    NSDictionary *_payloadOptions;
}

- (void).cxx_destruct;

@end
