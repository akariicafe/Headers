@class NSString, NSArray, SFActionItem, SFImage, SFFormattedText, SFRichText, SFButton, MKSearchFoundationResult;

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SFImage *leadingImage;
@property (retain) SFImage *fallbackImage;
@property (retain) SFButton *leadingButton;
@property BOOL preventThumbnailImageScaling;
@property (retain) NSString *applicationBundleIdentifier;
@property BOOL isLocalApplicationResult;
@property (retain) NSString *nearbyBusinessesString;
@property (retain) SFRichText *title;
@property BOOL truncateTitleMiddle;
@property (retain) SFFormattedText *secondaryTitle;
@property BOOL secondaryTitleIsDetached;
@property (retain) SFImage *secondaryTitleImage;
@property (retain, nonatomic) NSArray *details;
@property (retain) SFRichText *footnote;
@property (retain) NSString *footnoteButtonText;
@property (retain) SFActionItem *action;
@property (retain) SFFormattedText *trailingTopText;
@property (retain) SFFormattedText *trailingMiddleText;
@property (retain) SFFormattedText *trailingBottomText;
@property (retain) MKSearchFoundationResult *mapsResult;
@property BOOL useCompactDisplay;

+ (BOOL)urlIsDraggable:(id)a0;

- (int)separatorStyle;
- (BOOL)isContact;
- (void).cxx_destruct;
- (id)dragSubtitle;
- (id)descriptionText;
- (id)populatedMapsCardSectionIfApplicable;
- (void)fillOutPropertiesForCardSection:(id)a0;
- (id)richTextFromText:(id)a0;
- (id)punchouts;
- (id)contactIdentifiers;
- (BOOL)isDraggable;
- (id)dragURL;
- (BOOL)isTappable;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (id)initWithResult:(id)a0 suggestion:(id)a1 queryId:(unsigned long long)a2;
- (BOOL)hasLeadingImage;
- (id)dragTitle;
- (id)dragText;
- (id)dragAppBundleID;
- (Class)customCardSectionViewClass;

@end
