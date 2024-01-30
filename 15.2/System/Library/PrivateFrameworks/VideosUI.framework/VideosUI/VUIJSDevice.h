@class NSString;

@interface VUIJSDevice : VUIJSObject <VUIJSDevice> {
    id _networkPropertiesChangedToken;
}

@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isInAirplaneMode;
@property (readonly, nonatomic) NSString *networkType;
@property (readonly, nonatomic) BOOL isInRetailDemoMode;
@property (readonly, nonatomic) BOOL isSeedBuild;
@property (readonly, nonatomic) BOOL runningAnInternalBuild;
@property (readonly, nonatomic) NSString *osBuildNumber;
@property (readonly, nonatomic) BOOL isAlternateLayoutEnabled;
@property (readonly, nonatomic) BOOL supportsSharedWatchPostPlayBinge;

+ (id)getMobileGestaltString:(struct __CFString { } *)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAppContext:(id)a0;

@end
