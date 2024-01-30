@class ASDBetaAppVersion, NSString, NSArray;

@interface ASDBetaAppFeedback : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) ASDBetaAppVersion *appVersion;
@property (copy) NSString *comments;
@property (copy) NSString *email;
@property (copy) NSArray *imagesData;
@property (copy) NSString *incidentID;
@property unsigned long long timestamp;
@property unsigned long long appUptime;
@property (copy) NSString *bundleID;
@property (copy) NSString *pairedWatchModel;
@property (copy) NSString *pairedWatchOSVersion;
@property (copy) NSString *architecture;
@property unsigned int batteryPercentage;
@property (copy) NSString *carrier;
@property (copy) NSString *cellularNetworkType;
@property (copy) NSString *deviceType;
@property unsigned long long diskAvailable;
@property unsigned long long diskTotal;
@property (copy) NSString *locale;
@property (copy) NSString *networkConnectionType;
@property (copy) NSString *osVersion;
@property unsigned int screenHeight;
@property unsigned int screenWidth;
@property (copy) NSString *timeZone;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
