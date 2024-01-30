@class NSNumber, ICStorePlatformRequest, NSArray, ICUserIdentityStore, NSString, ICClientInfo, ICUserIdentity;

@interface MPStoreItemMetadataRequest : NSObject

@property (copy, nonatomic) ICClientInfo *clientInfo;
@property (copy, nonatomic) ICUserIdentity *delegatedUserIdentity;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (retain, nonatomic) ICUserIdentityStore *userIdentityStore;
@property (readonly, copy, nonatomic) ICStorePlatformRequest *storePlatformRequest;
@property (nonatomic) BOOL allowLocalEquivalencies;
@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (copy, nonatomic) NSNumber *timeoutInterval;
@property (copy, nonatomic) NSString *platform;
@property (nonatomic) double retryDelay;
@property (nonatomic) BOOL shouldIgnoreCache;
@property (nonatomic) BOOL shouldIgnoreExpiration;
@property (nonatomic) BOOL shouldRequireCachedResults;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (readonly, nonatomic, getter=isPersonalized) BOOL personalized;
@property (nonatomic) long long personalizationStyle;

- (id)init;
- (void).cxx_destruct;

@end
