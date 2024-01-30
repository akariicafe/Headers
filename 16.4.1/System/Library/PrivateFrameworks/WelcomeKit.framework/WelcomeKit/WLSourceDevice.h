@class NSString;

@interface WLSourceDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *api;
@property (copy, nonatomic) NSString *ipAddress;
@property (nonatomic) unsigned short socketPort;
@property (nonatomic) unsigned short httpPort;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL isSelectingDataTypeInHandshake;
@property (nonatomic) BOOL useMigrationKit;
@property (nonatomic) BOOL supportsFileLength;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *osAPIVersion;
@property (copy, nonatomic) NSString *hardwareBrand;
@property (copy, nonatomic) NSString *hardwareModel;
@property (copy, nonatomic) NSString *hardwareDesign;
@property (copy, nonatomic) NSString *hardwareMaker;
@property (copy, nonatomic) NSString *hardwareProduct;
@property (copy, nonatomic) NSString *clientVersion;
@property (nonatomic) BOOL canAddDisplay;
@property (nonatomic) BOOL canAddAccessibility;
@property (nonatomic) BOOL canAddFiles;
@property (copy, nonatomic) NSString *apiLevel;
@property (copy, nonatomic) NSString *brand;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *versionCode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
