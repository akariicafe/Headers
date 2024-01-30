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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColorValue:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithColorCollection:(id)a0;
- (id)initWithNaturalLightColor;
- (id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)a0;
- (id)colorByAdjustingToColorProfile:(id)a0;
- (BOOL)isSimilarToColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRed:(float)a0 green:(float)a1 blue:(float)a2;

@end
