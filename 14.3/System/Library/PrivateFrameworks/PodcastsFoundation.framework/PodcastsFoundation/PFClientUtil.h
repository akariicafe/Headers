@interface PFClientUtil : NSObject

@property (class, readonly, nonatomic) BOOL isRunningOnInternalOS;

+ (id)clientIdentifier;
+ (id)clientBundleVersion;
+ (id)clientIdentifierHeader;
+ (BOOL)platformSupportsVideo;
+ (BOOL)isRunningOnTV;
+ (BOOL)isPodcastsApp;
+ (BOOL)isRunningOnHomepod;
+ (id)mediaApiClientIdentifier;
+ (id)mediaApiClientVersion;

@end
