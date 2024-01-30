@class NSString, BBColor, BBImage;

@interface BBAppearance : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) BBColor *titleColor;
@property (copy, nonatomic) BBImage *image;
@property (copy, nonatomic) BBColor *color;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *viewClassName;

+ (id)appearanceWithTitle:(id)a0;

- (id)awakeAfterUsingCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
