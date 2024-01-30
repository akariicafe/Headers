@interface SCUpdateAppLaunchUpsellLastSeenDateCommand : NSObject <SCKZoneCommand> {
    void /* unknown type, empty encoding */ appLaunchUpsellLastSeenDate;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)executeWithZone:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
