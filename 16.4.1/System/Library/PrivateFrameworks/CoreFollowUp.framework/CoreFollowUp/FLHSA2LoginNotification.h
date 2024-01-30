@class NSString, NSSet, NSNumber;

@interface FLHSA2LoginNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *codePrompt;
@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) NSString *approveButtonTitle;
@property (copy, nonatomic) NSString *dismissButtonTitle;
@property (copy, nonatomic) NSSet *supportedDismissActions;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *deviceColorString;
@property (copy, nonatomic) NSString *pushMessageID;
@property (nonatomic) BOOL userAllowedSignIn;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)followUpItemUserInfo;
- (id)initWithFollowUpItemUserInfo:(id)a0;

@end
