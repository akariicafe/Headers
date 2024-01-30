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
@property (nonatomic) BOOL appleCertificatesEnabled;
@property (nonatomic) BOOL networkToolsEnabled;
@property (nonatomic) BOOL metricsUploadEnabled;
@property (nonatomic) BOOL brandedCallingEnabled;
@property (nonatomic) BOOL newsEmbeddedContentEnabled;

- (id)eventName;
- (id)analyticsDict;
- (void).cxx_destruct;

@end
