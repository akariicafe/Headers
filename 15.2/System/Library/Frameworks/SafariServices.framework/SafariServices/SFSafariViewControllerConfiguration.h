@class UIEventAttribution, SFSafariViewControllerActivityButton;

@interface SFSafariViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying> {
    BOOL _ephemeral;
    BOOL _performingAccountSecurityUpgrade;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long _redirectNotificationBehavior;
@property (nonatomic) BOOL entersReaderIfAvailable;
@property (nonatomic) BOOL barCollapsingEnabled;
@property (copy, nonatomic) SFSafariViewControllerActivityButton *activityButton;
@property (copy, nonatomic) UIEventAttribution *eventAttribution;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_isEphemeral;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setEphemeral:(BOOL)a0;
- (void)_setPerformingAccountSecurityUpgrade:(BOOL)a0;
- (BOOL)_isPerformingAccountSecurityUpgrade;

@end
