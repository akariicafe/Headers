@class NSString, ENTemporaryExposureKey;

@interface ENPersistentTemporaryExposureKey : NSObject

@property (nonatomic) unsigned int originalReportType;
@property (readonly, nonatomic) ENTemporaryExposureKey *key;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *regionCountryCode;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTemporaryExposureKey:(id)a0 appBundleIdentifier:(id)a1 regionCountryCode:(id)a2;

@end
