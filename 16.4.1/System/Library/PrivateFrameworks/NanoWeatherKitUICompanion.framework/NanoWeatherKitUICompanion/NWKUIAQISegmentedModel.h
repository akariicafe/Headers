@class NSArray, UIImage;

@interface NWKUIAQISegmentedModel : NWKUIAQIModel

@property (readonly) NSArray *segments;
@property (readonly) UIImage *glyph;

- (void).cxx_destruct;
- (id)_createGlyphWithName:(id)a0;
- (id)initWithAirQualityConditions:(id)a0;
- (id)initWithName:(id)a0 label:(id)a1 categoryDescription:(id)a2 color:(id)a3 date:(id)a4 expiration:(id)a5 segments:(id)a6 glyph:(id)a7;

@end
