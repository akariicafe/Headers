@interface AMSExpressCheckoutResultModel : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ selection;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
