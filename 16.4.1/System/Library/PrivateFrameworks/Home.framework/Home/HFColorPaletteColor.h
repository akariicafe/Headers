@class UIColor, NSString, HFColorCollection;
@protocol HFColorLikeObject;

@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying>

@property (readonly, nonatomic) HFColorCollection *colorCollection;
@property (readonly, nonatomic) id<HFColorLikeObject> colorValue;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) BOOL isNaturalLightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithUIColor:(id)a0;
- (id)initWithRed:(float)a0 green:(float)a1 blue:(float)a2;
- (id)initWithColorCollection:(id)a0;
- (id)initWithNaturalLightColor;
- (BOOL)isSimilarToColor:(id)a0;
- (id)colorByAdjustingToColorProfile:(id)a0;
- (id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)a0;
- (id)initWithColorValue:(id)a0;

@end
