@class NSString;

@interface ICMutableClientInfo : ICClientInfo

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientVersion;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (copy, nonatomic) NSString *bagProfile;
@property (copy, nonatomic) NSString *bagProfileVersion;

- (void)setRequestingBundleIdentifier:(id)a0;
- (void)setProcessName:(id)a0;
- (void)setClientIdentifier:(id)a0;
- (void)setClientVersion:(id)a0;
- (void)setBagProfileVersion:(id)a0;
- (void)setBundleIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBagProfile:(id)a0;
- (void)setRequestingBundleVersion:(id)a0;

@end
