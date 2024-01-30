@interface FMClient.SearchFilter : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ devices;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
