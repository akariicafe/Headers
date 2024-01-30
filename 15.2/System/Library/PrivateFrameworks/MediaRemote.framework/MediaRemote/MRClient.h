@class _MRNowPlayingClientProtobuf, NSString, NSArray, MRColorComponents, NSURL, NSData;

@interface MRClient : NSObject <NSCopying>

@property (class, readonly, nonatomic) MRClient *anyClient;
@property (class, readonly, nonatomic) MRClient *localClient;

@property (readonly, nonatomic) _MRNowPlayingClientProtobuf *protobuf;
@property (nonatomic) int processIdentifier;
@property (nonatomic) unsigned int processUserIdentifier;
@property (nonatomic) long long visibility;
@property (copy, nonatomic) MRColorComponents *tintColor;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *parentApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *representedBundleID;
@property (copy, nonatomic) NSArray *extendedBundleIdentifierHierarchy;
@property (copy, nonatomic) NSURL *appIcon;
@property (readonly, nonatomic) BOOL hasPlaceholder;
@property (readonly, nonatomic) BOOL hasAuxiliaryProperties;
@property (readonly, nonatomic, getter=isSystemMediaApplication) BOOL systemMediaApplication;
@property (readonly, nonatomic, getter=isSystemPodcastsApplication) BOOL systemPodcastsApplication;
@property (readonly, nonatomic, getter=isSystemBooksApplication) BOOL systemBooksApplication;
@property (readonly, nonatomic) MRClient *skeleton;
@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSArray *bundleIdentifierHierarchy;
@property (readonly, nonatomic, getter=isLocal) BOOL local;

- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void)resolvePlaceholdersForDeviceInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithProcessIdentifier:(int)a0 bundleIdentifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;

@end
