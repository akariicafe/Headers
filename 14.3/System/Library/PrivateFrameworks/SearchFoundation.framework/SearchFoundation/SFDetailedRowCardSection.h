@class SFColor, SFActionItem, NSDictionary, SFCard, NSString, SFImage, SFCommand, SFRichText, NSArray, NSData, SFFormattedText, SFUserReportRequest, SFButton;

@interface SFDetailedRowCardSection : SFCardSection <SFDetailedRowCardSection, NSSecureCoding, NSCopying> {
    struct { unsigned char canBeHidden : 1; unsigned char hasTopPadding : 1; unsigned char hasBottomPadding : 1; unsigned char separatorStyle : 1; unsigned char preventThumbnailImageScaling : 1; unsigned char isSecondaryTitleDetached : 1; unsigned char shouldUseCompactDisplay : 1; } _has;
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
@property (retain, nonatomic) SFImage *thumbnail;
@property (nonatomic) BOOL preventThumbnailImageScaling;
@property (retain, nonatomic) SFRichText *title;
@property (retain, nonatomic) SFFormattedText *secondaryTitle;
@property (retain, nonatomic) SFImage *secondaryTitleImage;
@property (nonatomic) BOOL isSecondaryTitleDetached;
@property (copy, nonatomic) NSArray *descriptions;
@property (retain, nonatomic) SFRichText *footnote;
@property (retain, nonatomic) SFFormattedText *trailingTopText;
@property (retain, nonatomic) SFFormattedText *trailingMiddleText;
@property (retain, nonatomic) SFFormattedText *trailingBottomText;
@property (retain, nonatomic) SFActionItem *action;
@property (retain, nonatomic) SFButton *button;
@property (nonatomic) BOOL shouldUseCompactDisplay;
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
- (BOOL)hasPreventThumbnailImageScaling;
- (BOOL)hasIsSecondaryTitleDetached;
- (BOOL)hasShouldUseCompactDisplay;
- (void)encodeWithCoder:(id)a0;

@end
