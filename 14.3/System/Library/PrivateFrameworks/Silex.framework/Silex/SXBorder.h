@class SXStrokeStyle;

@interface SXBorder : SXJSONObject

@property (readonly, nonatomic) SXStrokeStyle *all;
@property (readonly, nonatomic) SXStrokeStyle *top;
@property (readonly, nonatomic) SXStrokeStyle *bottom;
@property (readonly, nonatomic) SXStrokeStyle *left;
@property (readonly, nonatomic) SXStrokeStyle *right;

- (BOOL)isSolid;
- (id)defaultStrokeStyle;
- (BOOL)shouldBeDotted;

@end
