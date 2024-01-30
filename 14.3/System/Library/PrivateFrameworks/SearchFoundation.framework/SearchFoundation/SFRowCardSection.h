@class SFColor, NSString, NSArray, SFImage, NSData, SFCard, NSDictionary, SFUserReportRequest, SFCommand, SFRichText, NSNumber;

@interface SFRowCardSection : SFCardSection <SFRowCardSection, NSSecureCoding, NSCopying> {
    struct { unsigned char canBeHidden : 1; unsigned char hasTopPadding : 1; unsigned char hasBottomPadding : 1; unsigned char separatorStyle : 1; unsigned char imageIsRightAligned : 1; unsigned char keyNoWrap : 1; unsigned char valueNoWrap : 1; unsigned char cardPaddingBottom : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (retain, nonatomic) SFImage *image;
@property (nonatomic) BOOL imageIsRightAligned;
@property (retain, nonatomic) SFRichText *leadingText;
@property (retain, nonatomic) SFRichText *trailingText;
@property (retain, nonatomic) SFImage *attributionImage;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL keyNoWrap;
@property (copy, nonatomic) NSNumber *keyWeight;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL valueNoWrap;
@property (copy, nonatomic) NSNumber *valueWeight;
@property (nonatomic) BOOL cardPaddingBottom;
@property (retain, nonatomic) SFRichText *leadingSubtitle;
@property (retain, nonatomic) SFRichText *trailingSubtitle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL hideDivider;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasCanBeHidden;
- (BOOL)hasHasTopPadding;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasImageIsRightAligned;
- (BOOL)hasKeyNoWrap;
- (BOOL)hasValueNoWrap;
- (BOOL)hasCardPaddingBottom;
- (void)encodeWithCoder:(id)a0;

@end
