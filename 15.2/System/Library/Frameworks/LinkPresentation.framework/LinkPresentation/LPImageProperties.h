@class NSString, UIColor;

@interface LPImageProperties : NSObject <NSCopying>

@property (copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIColor *overlaidTextColor;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
