@class NSString, NSURL;

@interface NPTPerformanceTestConfiguration : NSObject <NSCopying> {
    NSURL *privateDownloadURL;
    NSURL *privateUploadURL;
    NSString *privatePingHost;
}

@property (retain, nonatomic) NSString *interfaceName;
@property (nonatomic) BOOL forceWiFi;
@property (nonatomic) BOOL useSecureConnection;
@property (nonatomic) int downloadSize;
@property (nonatomic) int uploadSize;
@property (nonatomic) unsigned long long pingCount;
@property (nonatomic) int pingAddressStyle;
@property (nonatomic) BOOL collectMetadata;
@property (nonatomic) long long concurrentStreams;
@property (retain, nonatomic) NSURL *downloadURL;
@property (retain, nonatomic) NSURL *uploadURL;
@property (retain, nonatomic) NSString *pingHost;
@property (nonatomic) int interfaceType;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long testDuration;
@property (nonatomic) BOOL endWhenStable;
@property (nonatomic) BOOL stopAtFileSize;

+ (id)defaultConfiguration;
+ (id)evaluateInterfaceName:(int)a0;
+ (id)interfaceServiceName:(int)a0;
+ (id)defaultConfigurationWiFi;
+ (id)defaultConfigurationWiredEthernet;
+ (id)defaultConfigurationCellular;
+ (id)fileSizeConfigurationWithTimeout:(int)a0 timeout:(unsigned long long)a1 downloadFileSize:(int)a2 uploadFileSize:(int)a3;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)cdnUploadURL;
- (id)cdnDownloadURL;
- (BOOL)customURLSet;

@end
