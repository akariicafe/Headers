@class NSArray, NSString, _SFPBImage, _SFPBRichText, _SFPBColor, NSData;

@interface _SFPBRowCardSection : PBCodable <_SFPBRowCardSection, NSSecureCoding>

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
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic) BOOL imageIsRightAligned;
@property (retain, nonatomic) _SFPBRichText *leadingText;
@property (retain, nonatomic) _SFPBRichText *trailingText;
@property (retain, nonatomic) _SFPBImage *attributionImage;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL keyNoWrap;
@property (nonatomic) int keyWeight;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL valueNoWrap;
@property (nonatomic) int valueWeight;
@property (nonatomic) BOOL cardPaddingBottom;
@property (retain, nonatomic) _SFPBRichText *leadingSubtitle;
@property (retain, nonatomic) _SFPBRichText *trailingSubtitle;
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

@end
