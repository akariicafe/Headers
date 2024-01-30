@interface FMClient.SessionInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ bundleId;
    void /* unknown type, empty encoding */ processName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
