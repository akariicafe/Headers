@class NSString, ASDBetaAppDisplayNames, NSDictionary, NSDate, ASDBetaAppVersion;

@interface ASDBetaAppLaunchInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *artistName;
@property (copy) ASDBetaAppDisplayNames *displayNames;
@property (copy) NSDate *expirationDate;
@property (getter=isFeedbackEnabled) BOOL feedbackEnabled;
@property (copy) NSString *iconURLTemplate;
@property (copy) NSDate *lastWelcomeScreenViewDate;
@property (getter=isLaunchScreenEnabled) BOOL launchScreenEnabled;
@property (copy) NSDictionary *localizedTestNotes;
@property (getter=hasSharedFeedback) BOOL sharedFeedback;
@property (copy) NSString *testerEmail;
@property (copy) ASDBetaAppVersion *version;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
