@interface PFClientUtil : NSObject

@property (class, readonly, nonatomic) BOOL isRunningOnInternalOS;
@property (class, readonly, nonatomic) BOOL supportsDownloads;
@property (class, readonly, nonatomic) BOOL supportsImageStore;
@property (class, readonly, nonatomic) BOOL supportsGUI;

+ (id)clientBundleVersion;
+ (id)clientIdentifier;
+ (id)clientIdentifierHeader;
+ (BOOL)isRunningOniPad;
+ (BOOL)supportsMetrics;
+ (BOOL)isAppRemovalService;
+ (BOOL)isPodcastsApp;
+ (BOOL)isPodcastsKit;
+ (BOOL)isRunningOnHomepod;
+ (BOOL)isRunningOnTV;
+ (id)mediaApiClientIdentifier;
+ (id)mediaApiClientVersion;
+ (BOOL)platformSupportsVideo;

@end
