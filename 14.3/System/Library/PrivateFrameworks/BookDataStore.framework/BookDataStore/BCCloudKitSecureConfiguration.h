@class NSString, NSArray;

@interface BCCloudKitSecureConfiguration : NSObject <BCContainerConfiguration>

@property (retain, nonatomic) NSString *queueIdentifier;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSArray *appZones;
@property (retain, nonatomic) NSArray *serviceZones;
@property (retain, nonatomic) NSString *dbArchiveFolderName;
@property (retain, nonatomic) NSString *dbArchiveExtension;
@property (retain, nonatomic) NSString *dbArchiveFilename;
@property (retain, nonatomic) NSString *dbSubscriptionID;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (nonatomic) BOOL requiresDeviceToDeviceEncryption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configuration;

- (void).cxx_destruct;
- (BOOL)shouldArchiveData:(id)a0;
- (BOOL)shouldPerformDatabaseSubscriptionForServiceMode:(BOOL)a0;

@end
