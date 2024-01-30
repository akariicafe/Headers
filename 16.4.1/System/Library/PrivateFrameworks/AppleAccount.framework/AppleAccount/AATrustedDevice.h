@class NSString;

@interface AATrustedDevice : NSObject

@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *modelDisplayName;
@property (readonly, nonatomic) NSString *modelSmallPhotoURL3x;
@property (readonly, nonatomic) NSString *modelSmallPhotoURL2x;
@property (readonly, nonatomic) NSString *modelSmallPhotoURL1x;
@property (readonly, nonatomic) NSString *modelLargePhotoURL3x;
@property (readonly, nonatomic) NSString *modelLargePhotoURL2x;
@property (readonly, nonatomic) NSString *modelLargePhotoURL1x;
@property (readonly, nonatomic) NSString *deviceDetailUri;
@property (readonly, nonatomic) NSString *deviceDetailHttpMethod;
@property (readonly, nonatomic) NSString *pushToken;
@property (readonly, nonatomic) BOOL fmipEnabled;
@property (readonly, nonatomic) BOOL currentDevice;
@property (readonly, nonatomic) BOOL showFMIPLink;
@property (readonly, nonatomic) BOOL showBackupRow;
@property (readonly, nonatomic) BOOL showFMIPRow;
@property (readonly, nonatomic) BOOL injectNativeHeader;
@property (readonly, nonatomic) NSString *FMIPDeviceID;
@property (readonly, nonatomic) NSString *detailDeviceName;
@property (readonly, nonatomic) NSString *detailSubLabel;
@property (readonly, nonatomic) NSString *deviceQualifiedClass;
@property (readonly, nonatomic) NSString *rawLatestBackup;
@property (readonly, nonatomic) NSString *backupUUID;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)updateWithRUIClientInfo:(id)a0;

@end
