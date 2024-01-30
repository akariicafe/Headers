@class SFColor, SFMediaItem, NSArray, NSString, SFActionItem, NSData, NSDictionary, SFCard, SFUserReportRequest, SFCommand, SFRichText;

@interface SFMediaInfoCardSection : SFCardSection <SFMediaInfoCardSection, NSSecureCoding, NSCopying> {
    struct { unsigned char canBeHidden : 1; unsigned char hasTopPadding : 1; unsigned char hasBottomPadding : 1; unsigned char separatorStyle : 1; unsigned char isMediaContainer : 1; } _has;
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
@property (retain, nonatomic) SFMediaItem *mediaItem;
@property (copy, nonatomic) NSArray *details;
@property (retain, nonatomic) SFActionItem *playAction;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *watchListIdentifier;
@property (copy, nonatomic) NSString *watchListButtonLabel;
@property (copy, nonatomic) NSString *watchListContinuationText;
@property (copy, nonatomic) NSString *watchListConfirmationText;
@property (nonatomic) BOOL isMediaContainer;
@property (retain, nonatomic) SFRichText *specialOfferButtonLabel;
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
- (BOOL)hasIsMediaContainer;
- (void)encodeWithCoder:(id)a0;

@end
