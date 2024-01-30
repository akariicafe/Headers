@class NSData, NSString, NSArray, _SFPBColor, _SFPBButton, _SFPBFormattedText, _SFPBImage, _SFPBRichText, _SFPBActionItem;

@interface _SFPBDetailedRowCardSection : PBCodable <_SFPBDetailedRowCardSection, NSSecureCoding>

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
@property (retain, nonatomic) _SFPBImage *thumbnail;
@property (nonatomic) BOOL preventThumbnailImageScaling;
@property (retain, nonatomic) _SFPBRichText *title;
@property (retain, nonatomic) _SFPBFormattedText *secondaryTitle;
@property (retain, nonatomic) _SFPBImage *secondaryTitleImage;
@property (nonatomic) BOOL isSecondaryTitleDetached;
@property (copy, nonatomic) NSArray *descriptions;
@property (retain, nonatomic) _SFPBRichText *footnote;
@property (retain, nonatomic) _SFPBFormattedText *trailingTopText;
@property (retain, nonatomic) _SFPBFormattedText *trailingMiddleText;
@property (retain, nonatomic) _SFPBFormattedText *trailingBottomText;
@property (retain, nonatomic) _SFPBActionItem *action;
@property (retain, nonatomic) _SFPBButton *button;
@property (nonatomic) BOOL shouldUseCompactDisplay;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addPunchoutOptions:(id)a0;
- (void)clearPunchoutOptions;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (id)initWithFacade:(id)a0;
- (void)addDescriptions:(id)a0;
- (void)clearDescriptions;
- (unsigned long long)descriptionsCount;
- (id)descriptionsAtIndex:(unsigned long long)a0;

@end
