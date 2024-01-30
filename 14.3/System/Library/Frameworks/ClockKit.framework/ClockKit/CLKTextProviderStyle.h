@class CLKFont, NSDictionary;

@interface CLKTextProviderStyle : NSObject <NSCopying>

@property (retain, nonatomic) CLKFont *font;
@property (retain, nonatomic) CLKFont *monospacedDigitsFont;
@property (retain, nonatomic) CLKFont *smallCapsBaseFont;
@property (nonatomic) BOOL uppercase;
@property (retain, nonatomic) NSDictionary *otherAttributes;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL shouldEmbedTintColors;
@property (nonatomic) BOOL shouldStyleForTritium;

+ (id)otherAttributesWithParagraphStyle:(id)a0 kerning:(double)a1;
+ (id)styleWithFont:(id)a0 smallCapsBaseFont:(id)a1 uppercase:(BOOL)a2 otherAttributes:(id)a3 minimumScaleFactor:(double)a4 shouldEmbedTintColor:(BOOL)a5;
+ (id)styleWithFont:(id)a0 smallCapsBaseFont:(id)a1 uppercase:(BOOL)a2 otherAttributes:(id)a3 minimumScaleFactor:(double)a4 shouldEmbedTintColor:(BOOL)a5 shouldStyleForTritium:(BOOL)a6;
+ (id)styleWithFont:(id)a0 smallCapsBaseFont:(id)a1 uppercase:(BOOL)a2 otherAttributes:(id)a3 minimumScaleFactor:(double)a4;
+ (id)styleWithFont:(id)a0 smallCapsBaseFont:(id)a1 uppercase:(BOOL)a2 otherAttributes:(id)a3;
+ (id)otherAttributesWithParagraphStyle:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
