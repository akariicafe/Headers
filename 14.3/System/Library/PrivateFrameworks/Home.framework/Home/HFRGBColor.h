@class UIColor, NSString;

@interface HFRGBColor : NSObject <HFColorPrimitive, NSCopying>

@property (readonly, nonatomic) float red;
@property (readonly, nonatomic) float green;
@property (readonly, nonatomic) float blue;
@property (readonly, copy, nonatomic) UIColor *UIColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hf_RGBColorRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithRed:(float)a0 green:(float)a1 blue:(float)a2;
- (id)initWithUIColor:(id)a0;
- (id)valueDescription;
- (id)initWithHue:(float)a0 saturation:(float)a1 brightness:(float)a2;
- (void)getHue:(float *)a0 saturation:(float *)a1 brightness:(float *)a2;

@end
