@interface MPSConvolutionDataSourceWrapper_SecureCoding : MPSConvolutionDataSourceWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
