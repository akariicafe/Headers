@class NSString, NSArray, SFActionItem, SFImage, SFFormattedText, SFRichText, SFButton, MKSearchFoundationResult;

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SFImage *leadingImage;
@property (retain) SFImage *fallbackImage;
@property (retain) SFButton *leadingButton;
@property BOOL preventThumbnailImageScaling;
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
@property (retain) NSArray *buttonItems;
@property BOOL buttonItemsAreTrailing;
@property (retain) SFImage *trailingThumbnail;
@property (retain) MKSearchFoundationResult *mapsResult;
@property BOOL useCompactDisplay;

+ (BOOL)urlIsDraggable:(id)a0;

- (BOOL)isDraggable;
- (int)separatorStyle;
- (BOOL)isTappable;
- (id)contactIdentifiers;
- (id)descriptionText;
- (id)dragURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isContact;
- (id)dragAppBundleID;
- (id)dragText;
- (id)punchouts;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (id)initWithResult:(id)a0 suggestion:(id)a1 queryId:(unsigned long long)a2;
- (BOOL)hasLeadingImage;
- (Class)cardSectionViewClass;
- (id)dragTitle;
- (id)dragSubtitle;
- (id)requestAppClipObjects;
- (id)populatedMapsCardSectionIfApplicable;
- (void)fillOutPropertiesForCardSection:(id)a0;
- (id)richTextFromText:(id)a0;

@end
