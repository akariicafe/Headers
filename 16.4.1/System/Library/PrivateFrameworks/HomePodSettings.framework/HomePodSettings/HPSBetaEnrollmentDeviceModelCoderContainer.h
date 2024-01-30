@interface HPSBetaEnrollmentDeviceModelCoderContainer : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ availability;
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
