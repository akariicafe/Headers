@class NSNumber, NSString;

@interface CPSClipLaunchOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *userNotificationGranted;
@property (retain, nonatomic) NSNumber *locationConfirmationGranted;
@property (copy, nonatomic) NSString *predefinedBundleID;
@property (nonatomic) BOOL skipsLaunching;
@property (nonatomic) BOOL showsAppAttributionBanner;

+ (id)optionsForAppClipRecord:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
