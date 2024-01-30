@class NTPBColorGradient, NTPBColor;

@interface NTPBCardStyle : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTitleForegroundColor;
@property (retain, nonatomic) NTPBColor *titleForegroundColor;
@property (readonly, nonatomic) BOOL hasEyebrowForegroundColor;
@property (retain, nonatomic) NTPBColor *eyebrowForegroundColor;
@property (readonly, nonatomic) BOOL hasCardBackgroundColor;
@property (retain, nonatomic) NTPBColor *cardBackgroundColor;
@property (readonly, nonatomic) BOOL hasCardForegroundColor;
@property (retain, nonatomic) NTPBColor *cardForegroundColor;
@property (readonly, nonatomic) BOOL hasSauceGradient;
@property (retain, nonatomic) NTPBColorGradient *sauceGradient;
@property (readonly, nonatomic) BOOL hasCallToActionBackgroundColor;
@property (retain, nonatomic) NTPBColor *callToActionBackgroundColor;
@property (readonly, nonatomic) BOOL hasCallToActionForegroundColor;
@property (retain, nonatomic) NTPBColor *callToActionForegroundColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
