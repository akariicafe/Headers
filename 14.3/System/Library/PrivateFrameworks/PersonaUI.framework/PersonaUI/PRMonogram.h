@class CAGradientLayer, NSString, UIColor, PRMonogramColor;

@interface PRMonogram : NSObject

@property (class, readonly, nonatomic) CAGradientLayer *plateOverlayLayer;

@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long fontIndex;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (readonly, nonatomic) UIColor *plateFlatColor;
@property (readonly, nonatomic) UIColor *plateGradientStartColor;
@property (readonly, nonatomic) UIColor *plateGradientEndColor;
@property (readonly, nonatomic) UIColor *plateSelectedActiveColor;
@property (readonly, nonatomic) UIColor *plateSelectedInactiveColor;
@property (readonly, nonatomic) UIColor *plateSelectedActiveTextColor;

+ (id)monogramWithData:(id)a0;
+ (id)monogram;
+ (void)updatePlateOverlayLayer:(id)a0;
+ (id)_fontSpecs;
+ (unsigned long long)countOfFonts;
+ (id)fontForIndex:(unsigned long long)a0 plateDiameter:(double)a1;
+ (double)kerningForFontIndex:(unsigned long long)a0 fontSize:(double)a1;

- (id)dataRepresentationWithVersion:(unsigned char)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setFontIndexToUnsupportedValue;
- (BOOL)_renderTextInContext:(struct CGContext { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)snapshotWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (void)_takeValuesFromDataRepresentation:(id)a0;
- (id)initWithText:(id)a0 fontIndex:(unsigned long long)a1 monogramColor:(id)a2;
- (id)description;
- (void)appendToRecipe:(id)a0 text:(id)a1 fontIndex:(unsigned char)a2;
- (id)_initWithData:(id)a0;
- (id)dataRepresentation;
- (id)stringAttributesForDiameter:(double)a0;
- (void)appendToRecipe:(id)a0 text:(id)a1;

@end
