@class NSString, UIColor;

@interface HKDisplayTypeContextItemTitleAccessory : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) UIColor *color;

+ (id)titleAccessoryWithImagedNamed:(id)a0 imageColor:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)_isEqualToTitleAccessory:(id)a0;

@end
