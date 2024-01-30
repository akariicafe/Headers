@interface CoreIDVShared.IdentityImageDimension : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ width;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
