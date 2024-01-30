@interface SVDBooleanCapabilityPrimitive : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ supportStatus;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
