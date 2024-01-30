@class NSString, NSNumber;

@interface SSHarvestedDeviceMetadata : NSObject

@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *systemLanguage;
@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) NSString *hardwareModel;
@property (readonly, nonatomic) NSNumber *mainScreenNativeScale;
@property (readonly, nonatomic) NSNumber *mainScreenScale;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSNumber *globalUserInflectionGender;
@property (readonly, nonatomic) NSNumber *userInterfaceIdiom;
@property (readonly, nonatomic) NSNumber *isBoldTextEnabled;
@property (readonly, nonatomic) NSNumber *buttonShapesEnabled;
@property (readonly, nonatomic) NSNumber *displayZoomOption;

- (id)init;
- (void).cxx_destruct;
- (id)_getProductName;
- (id)_getHardwareModel;

@end
