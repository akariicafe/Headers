@class SFColor, NSString, NSArray, SFActionItem, SFImage, NSData, NSDictionary, SFCard, SFUserReportRequest, SFCommand, SFRichText, NSNumber;

@interface SFRichTitleCardSection : SFTitleCardSection <SFRichTitleCardSection, NSSecureCoding, NSCopying> {
    struct { unsigned char canBeHidden : 1; unsigned char hasTopPadding : 1; unsigned char hasBottomPadding : 1; unsigned char separatorStyle : 1; unsigned char isCentered : 1; unsigned char reviewNewLine : 1; unsigned char auxiliaryBottomTextColor : 1; unsigned char hideVerticalDivider : 1; unsigned char titleAlign : 1; unsigned char titleNoWrap : 1; unsigned char thumbnailCropCircle : 1; unsigned char playActionAlign : 1; unsigned char subtitleIsEmphasized : 1; } _has;
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
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) SFImage *titleImage;
@property (nonatomic) BOOL isCentered;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSNumber *rating;
@property (copy, nonatomic) NSString *ratingText;
@property (retain, nonatomic) SFImage *reviewGlyph;
@property (copy, nonatomic) NSString *reviewText;
@property (nonatomic) BOOL reviewNewLine;
@property (copy, nonatomic) NSArray *moreGlyphs;
@property (copy, nonatomic) NSString *auxiliaryTopText;
@property (copy, nonatomic) NSString *auxiliaryMiddleText;
@property (copy, nonatomic) NSString *auxiliaryBottomText;
@property (nonatomic) int auxiliaryBottomTextColor;
@property (copy, nonatomic) NSNumber *auxiliaryAlignment;
@property (nonatomic) BOOL hideVerticalDivider;
@property (nonatomic) int titleAlign;
@property (copy, nonatomic) NSNumber *titleWeight;
@property (nonatomic) BOOL titleNoWrap;
@property (nonatomic) BOOL thumbnailCropCircle;
@property (retain, nonatomic) SFImage *imageOverlay;
@property (retain, nonatomic) SFActionItem *playAction;
@property (nonatomic) int playActionAlign;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *footnote;
@property (retain, nonatomic) SFRichText *richSubtitle;
@property (nonatomic) BOOL subtitleIsEmphasized;
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
- (BOOL)hasTitleNoWrap;
- (BOOL)hasIsCentered;
- (BOOL)hasReviewNewLine;
- (BOOL)hasAuxiliaryBottomTextColor;
- (BOOL)hasHideVerticalDivider;
- (BOOL)hasTitleAlign;
- (BOOL)hasThumbnailCropCircle;
- (BOOL)hasPlayActionAlign;
- (BOOL)hasSubtitleIsEmphasized;
- (void)encodeWithCoder:(id)a0;

@end
