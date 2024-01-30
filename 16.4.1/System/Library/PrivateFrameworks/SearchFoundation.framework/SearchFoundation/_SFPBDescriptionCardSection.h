@class NSData, NSArray, NSString, _SFPBImage, _SFPBURL, _SFPBColor, _SFPBText;

@interface _SFPBDescriptionCardSection : PBCodable <_SFPBDescriptionCardSection, NSSecureCoding>

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
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) _SFPBText *descriptionText;
@property (copy, nonatomic) NSString *expandText;
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic) BOOL titleNoWrap;
@property (nonatomic) int titleWeight;
@property (nonatomic) int descriptionSize;
@property (nonatomic) int descriptionWeight;
@property (nonatomic) BOOL descriptionExpand;
@property (nonatomic) int imageAlign;
@property (nonatomic) int textAlign;
@property (copy, nonatomic) NSString *attributionText;
@property (retain, nonatomic) _SFPBURL *attributionURL;
@property (retain, nonatomic) _SFPBImage *attributionGlyph;
@property (copy, nonatomic) NSArray *richDescriptions;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)a0;
- (void)addRichDescriptions:(id)a0;
- (void)clearPunchoutOptions;
- (void)clearRichDescriptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)punchoutOptionsCount;
- (id)richDescriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)richDescriptionsCount;

@end
