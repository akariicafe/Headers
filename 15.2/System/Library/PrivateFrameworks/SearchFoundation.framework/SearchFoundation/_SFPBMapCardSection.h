@class _SFPBMapRegion, NSArray, NSString, _SFPBLatLng, NSData, _SFPBColor;

@interface _SFPBMapCardSection : PBCodable <_SFPBMapCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (retain, nonatomic) _SFPBLatLng *location;
@property (retain, nonatomic) _SFPBColor *pinColor;
@property (copy, nonatomic) NSString *footnoteLabel;
@property (copy, nonatomic) NSString *footnote;
@property (nonatomic) BOOL interactive;
@property (nonatomic) int sizeFormat;
@property (retain, nonatomic) _SFPBMapRegion *boundingMapRegion;
@property (nonatomic) int pinBehavior;
@property (copy, nonatomic) NSArray *pins;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPins:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearPins;
- (unsigned long long)pinsCount;
- (void)addPunchoutOptions:(id)a0;
- (void)clearPunchoutOptions;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (id)pinsAtIndex:(unsigned long long)a0;

@end
