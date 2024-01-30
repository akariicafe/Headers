@class NSString;

@interface FLHSA2PasswordResetNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *approveButtonTitle;
@property (copy, nonatomic) NSString *dismissButtonTitle;
@property (copy, nonatomic) NSString *appleID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFollowUpItemUserInfo:(id)a0;
- (id)followUpItemUserInfo;

@end
