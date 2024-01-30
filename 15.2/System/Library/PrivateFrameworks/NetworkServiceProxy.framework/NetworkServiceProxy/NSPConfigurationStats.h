@class NSString;

@interface NSPConfigurationStats : NSPProxyAnalytics

@property (nonatomic) unsigned long long configurationVersion;
@property (nonatomic) BOOL configurationEnabled;
@property (nonatomic) BOOL tokenFetchEnabled;
@property (retain, nonatomic) NSString *tierType;
@property (nonatomic) BOOL safariUnencryptedEnabled;
@property (nonatomic) BOOL safariDNSEnabled;
@property (nonatomic) BOOL safariTrackersEnabled;
@property (nonatomic) BOOL safariAllEnabled;
@property (nonatomic) BOOL safariHTTPEnabled;
@property (nonatomic) BOOL mailTrackersEnabled;
@property (nonatomic) BOOL unencryptedEnabled;
@property (nonatomic) BOOL dnsEnabled;
@property (nonatomic) BOOL knownTrackersEnabled;
@property (nonatomic) BOOL appTrackersEnabled;
@property (nonatomic) BOOL newsURLResolutionEnabled;
@property (nonatomic) BOOL exposureNotificationsEnabled;

- (id)analyticsDict;
- (void).cxx_destruct;
- (id)eventName;

@end
