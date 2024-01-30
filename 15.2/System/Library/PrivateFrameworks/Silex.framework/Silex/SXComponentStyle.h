@class SXFill, NSString, SXComponentShadow, SXDataTableStyle, SXJSONArray, SXComponentMask, SXBorder, UIColor;

@interface SXComponentStyle : SXJSONObject <SXComponentStyle>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SXFill *fill;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) SXComponentShadow *shadow;
@property (readonly, nonatomic) SXBorder *border;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) SXDataTableStyle *tableStyle;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, nonatomic) SXComponentMask *mask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SXJSONArray *conditional;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;

- (id)fillWithValue:(id)a0 withType:(int)a1;
- (id)maskWithValue:(id)a0 withType:(int)a1;

@end
