@class _MRNowPlayingClientProtobuf, NSString, NSArray, MRColorComponents, NSURL, NSData;

@interface MRClient : NSObject <NSCopying>

@property (class, readonly, nonatomic) MRClient *anyClient;
@property (class, readonly, nonatomic) MRClient *localClient;

@property (readonly, nonatomic) _MRNowPlayingClientProtobuf *protobuf;
@property (nonatomic) int processIdentifier;
@property (nonatomic) int processUserIdentifier;
@property (nonatomic) long long visibility;
@property (copy, nonatomic) MRColorComponents *tintColor;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *parentApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *extendedBundleIdentifierHierarchy;
@property (copy, nonatomic) NSURL *appIcon;
@property (readonly, nonatomic) BOOL hasPlaceholder;
@property (readonly, nonatomic) BOOL hasAuxiliaryProperties;
@property (readonly, nonatomic, getter=isSystemMediaApplication) BOOL systemMediaApplication;
@property (readonly, nonatomic, getter=isSystemPodcastsApplication) BOOL systemPodcastsApplication;
@property (readonly, nonatomic) MRClient *skeleton;
@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSArray *bundleIdentifierHierarchy;
@property (readonly, nonatomic, getter=isLocal) BOOL local;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithProcessIdentifier:(int)a0 bundleIdentifier:(id)a1;
- (id)initWithProtobuf:(id)a0;
- (void)resolvePlaceholdersForDeviceInfo:(id)a0;

@end
