@class NSString, UIColor;

@interface LPImageProperties : NSObject <NSCopying>

@property (copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIColor *overlaidTextColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
