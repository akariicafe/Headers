@class UIFont, NSMutableDictionary, ICBaseTextView, UIImage, ICNote, TTTextStorage, NSDate;

@interface ICAttributionViewConfigurationSharedState : NSObject

@property (copy, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) id primaryFontStorage;
@property (copy, nonatomic) UIFont *secondaryFont;
@property (retain, nonatomic) id secondaryFontStorage;
@property (copy, nonatomic) UIImage *expandedDisclosureImage;
@property (copy, nonatomic) UIImage *collapsedDisclosureImage;
@property (retain, nonatomic) NSMutableDictionary *userIDToHighlightColor;
@property (retain, nonatomic) NSMutableDictionary *userIDToShortName;
@property (readonly, weak, nonatomic) ICBaseTextView *textView;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) TTTextStorage *noteTextStorage;
@property (copy, nonatomic) NSDate *noteLastOpenedDate;
@property (nonatomic) double panelWidth;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) double topTextViewInset;

- (void)updateFonts;
- (void).cxx_destruct;
- (id)highlightColorForUserID:(id)a0;
- (id)disclosureImageWithSymbolName:(id)a0;
- (id)initWithTextView:(id)a0 note:(id)a1;
- (BOOL)isTimestampUnread:(id)a0 forUserID:(id)a1;
- (id)shortNameForUserID:(id)a0;
- (void)synchronouslyLoadDataForEditGroups:(id)a0;
- (void)updateFontStorages;
- (void)updateHighlightColorsForUserIDs:(id)a0;
- (void)updateImages;
- (void)updateShortNamesForUserIDs:(id)a0;

@end
