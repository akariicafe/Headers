@class NSString, NSDictionary;

@interface SUCorePolicySoftwareUpdateScan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long specifiedFields;
@property (nonatomic) BOOL allowsCellular;
@property (nonatomic) BOOL discretionary;
@property (nonatomic) BOOL requiresPowerPluggedIn;
@property (nonatomic) BOOL restrictToIncremental;
@property (nonatomic) BOOL restrictToFull;
@property (nonatomic) BOOL allowSameVersion;
@property (nonatomic) int downloadTimeoutSecs;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *rampingScanType;
@property (nonatomic) long long scanUpdateType;
@property (nonatomic) BOOL liveServerCatalogOnly;
@property (retain, nonatomic) NSDictionary *additionalServerParams;
@property (retain, nonatomic) NSDictionary *additionalOptions;

+ (id)nameForScanUpdateType:(long long)a0;

- (void)backToDefaults;
- (id)summary;
- (BOOL)shouldScanForMinorUpdates;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldScanForMajorUpdates;

@end
