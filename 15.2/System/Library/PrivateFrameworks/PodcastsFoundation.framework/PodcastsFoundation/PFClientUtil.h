@interface PFClientUtil : NSObject

@property (class, readonly, nonatomic) BOOL isRunningOnInternalOS;
@property (class, readonly, nonatomic) BOOL supportsDownloads;

+ (id)clientIdentifierHeader;
+ (id)clientBundleVersion;
+ (id)clientIdentifier;
+ (BOOL)platformSupportsVideo;
+ (BOOL)isRunningOnTV;
+ (BOOL)isRunningOnHomepod;
+ (BOOL)isPodcastsApp;
+ (BOOL)supportsMetrics;
+ (id)mediaApiClientIdentifier;
+ (id)mediaApiClientVersion;

@end
