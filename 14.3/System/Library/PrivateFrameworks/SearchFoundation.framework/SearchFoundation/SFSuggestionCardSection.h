@class NSData, NSString, NSArray, SFColor, SFImage, SFCard, NSDictionary, SFUserReportRequest, SFCommand, SFRichText;

@interface SFSuggestionCardSection : SFCardSection <SFSuggestionCardSection, NSSecureCoding, NSCopying> {
    struct { unsigned char canBeHidden : 1; unsigned char hasTopPadding : 1; unsigned char hasBottomPadding : 1; unsigned char separatorStyle : 1; unsigned char isContact : 1; unsigned char suggestionType : 1; } _has;
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
@property (retain, nonatomic) SFRichText *suggestionText;
@property (nonatomic) BOOL isContact;
@property (copy, nonatomic) NSString *scopedSearchSectionBundleIdentifier;
@property (nonatomic) int suggestionType;
@property (retain, nonatomic) SFRichText *detailText;
@property (retain, nonatomic) SFImage *thumbnail;
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
- (BOOL)hasSuggestionType;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasCanBeHidden;
- (BOOL)hasHasTopPadding;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasSeparatorStyle;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasIsContact;

@end
