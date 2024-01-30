@class NSString, NSNumber, NSArray;

@interface ADDeviceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *ISOcountryCode;
@property (copy, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *osVersionAndBuild;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *systemName;
@property (retain, nonatomic) NSString *systemVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSNumber *screenWidth;
@property (retain, nonatomic) NSNumber *screenHeight;
@property (copy, nonatomic) NSArray *keyboards;
@property (nonatomic) BOOL batteryDischarging;
@property (nonatomic) int orientation;
@property (nonatomic) int interfaceIdiom;
@property (nonatomic) BOOL carKitConnected;
@property (retain, nonatomic) NSNumber *scale;
@property (nonatomic) BOOL voiceOverRunning;

- (void)updateLocality:(id)a0 adminArea:(id)a1 subAdmin:(id)a2 isoCountryCode:(id)a3 postalCode:(id)a4;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
