@interface SwiftUIEnvironmentWrapper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ phase;
    void /* unknown type, empty encoding */ focusedValues;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
