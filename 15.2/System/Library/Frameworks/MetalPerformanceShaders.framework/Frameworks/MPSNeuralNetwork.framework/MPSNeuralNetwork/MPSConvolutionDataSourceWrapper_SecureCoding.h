@interface MPSConvolutionDataSourceWrapper_SecureCoding : MPSConvolutionDataSourceWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
