@class NSArray, NSString, _SFPBImage, _SFPBRichText, _SFPBColor, NSData;

@interface _SFPBSocialMediaPostCardSection : PBCodable <_SFPBSocialMediaPostCardSection, NSSecureCoding>

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
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL nameNoWrap;
@property (nonatomic) int nameMaxLines;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) _SFPBImage *verifiedGlyph;
@property (retain, nonatomic) _SFPBImage *profilePicture;
@property (retain, nonatomic) _SFPBRichText *post;
@property (retain, nonatomic) _SFPBImage *picture;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *footnote;
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
