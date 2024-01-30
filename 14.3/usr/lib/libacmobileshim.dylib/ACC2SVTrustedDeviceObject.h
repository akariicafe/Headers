@class NSString, NSData, NSDate;

@interface ACC2SVTrustedDeviceObject : NSObject

@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *deviceClass;
@property (retain, nonatomic) NSString *deviceDescription;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceModelName;
@property (retain, nonatomic) NSString *deviceColor;
@property (retain, nonatomic) NSData *deviceIcon;
@property (retain, nonatomic) NSDate *lastUseDate;
@property (readonly, nonatomic) NSString *imageURL;
@property (readonly, nonatomic) NSString *deviceDisplayDescription;
@property (readonly, nonatomic) BOOL isSMSDevice;
@property (readonly, nonatomic) BOOL isTOTPDevice;

- (double)scale;
- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
