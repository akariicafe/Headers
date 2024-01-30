@interface NTKExplorerDotLayoutConstraints : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double dotDiameter;
@property double dotBorderWidth;
@property double dotSpacing;
@property double noServiceDotHeight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToLayoutConstraints:(id)a0;

@end
