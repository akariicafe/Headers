@class NSMutableArray, UITextView;

@interface OBPrivacySplashListView : UIStackView

@property BOOL displayingPrivacyPane;
@property (retain, nonatomic) NSMutableArray *textViews;
@property (retain, nonatomic) NSMutableArray *stackedIconTextLists;
@property (readonly, nonatomic) UITextView *footerTextView;
@property (nonatomic) BOOL underlineLinks;

- (void)updateFonts;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithContentList:(id)a0 dataDetectorTypes:(unsigned long long)a1 displayingPrivacyPane:(BOOL)a2;
- (void)updateSpacing;
- (void)_updateTextViewsForLinkUITreatment:(id)a0;
- (id)initWithContentList:(id)a0 dataDetectorTypes:(unsigned long long)a1;
- (void)tintColorDidChange;
- (void)updateTextAlignment;

@end
