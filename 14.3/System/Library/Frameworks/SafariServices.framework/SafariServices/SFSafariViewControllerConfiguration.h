@interface SFSafariViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying> {
    BOOL _ephemeral;
    BOOL _performingAccountSecurityUpgrade;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long _redirectNotificationBehavior;
@property (nonatomic) BOOL entersReaderIfAvailable;
@property (nonatomic) BOOL barCollapsingEnabled;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEphemeral;
- (BOOL)_isPerformingAccountSecurityUpgrade;
- (void)_setEphemeral:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setPerformingAccountSecurityUpgrade:(BOOL)a0;

@end
