@class NSString, NSDictionary, NSDate;

@interface HDClientKeepAliveAssertion : HDAssertion

@property (nonatomic) long long launchCount;
@property (copy, nonatomic) NSDate *lastLaunchAttempt;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *payloadOptions;

- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)a0 clientBundleIdentifier:(id)a1 payloadOptions:(id)a2;

@end
