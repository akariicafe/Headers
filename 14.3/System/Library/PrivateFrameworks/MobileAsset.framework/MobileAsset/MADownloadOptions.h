@class NSString, NSMutableDictionary;

@interface MADownloadOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) long long timeoutIntervalForResource;
@property (nonatomic) BOOL discretionary;
@property (nonatomic) BOOL allowsExpensiveAccess;
@property (nonatomic) BOOL requiresPowerPluggedIn;
@property (nonatomic) BOOL canUseLocalCacheServer;
@property (nonatomic) BOOL prefersInfraWiFi;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableDictionary *additionalServerParams;
@property (nonatomic) BOOL liveServerCatalogOnly;
@property (nonatomic) BOOL liveServerCatalogOnlyIsOverridden;

- (id)init;
- (void)logOptions;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
