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
@property (retain) NSString *pinText;
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

- (int)separatorStyle;
- (id)dragAppBundleID;
- (id)descriptionText;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isTappable;
- (BOOL)isDraggable;
- (id)contactIdentifiers;
- (void).cxx_destruct;
- (BOOL)isContact;
- (id)dragURL;
- (BOOL)hasLeadingImage;
- (Class)cardSectionViewClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (void)fillOutPropertiesForCardSection:(id)a0;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (id)initWithResult:(id)a0 suggestion:(id)a1 queryId:(unsigned long long)a2;
- (id)populatedMapsCardSectionIfApplicable;
- (id)punchouts;
- (id)requestAppClipObjects;
- (id)richTextFromText:(id)a0;

@end
