@class NSString, NSObject;

@interface NetworkQualityConfiguration : NSObject <NSCopying>

@property BOOL forceQuic;
@property BOOL enableL4S;
@property BOOL privateRelay;
@property (retain, nonatomic) NSString *hostOverride;
@property (copy, nonatomic) NSObject *configuration;
@property (copy, nonatomic) NSString *networkInterfaceName;
@property BOOL idleLatency;
@property BOOL upload;
@property BOOL download;
@property BOOL parallel;
@property BOOL workingLatency;
@property BOOL validateCertificate;
@property long long minUploadFlows;
@property long long maxUploadFlows;
@property long long minDownloadFlows;
@property long long maxDownloadFlows;
@property BOOL telemetry;
@property long long minRuntime;
@property long long maxRuntime;
@property long long maxDownlinkData;
@property long long maxUplinkData;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
