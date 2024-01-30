@class NSMutableArray, UITextView;

@interface OBPrivacySplashListView : UIStackView

@property BOOL displayingPrivacyPane;
@property (retain, nonatomic) NSMutableArray *textViews;
@property (retain, nonatomic) NSMutableArray *stackedIconTextLists;
@property (readonly, nonatomic) UITextView *footerTextView;

- (void).cxx_destruct;
- (void)updateFonts;
- (id)initWithContentList:(id)a0 dataDetectorTypes:(unsigned long long)a1 displayingPrivacyPane:(BOOL)a2;
- (void)updateSpacing;
- (void)updateTextAlignment;
- (id)initWithContentList:(id)a0 dataDetectorTypes:(unsigned long long)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
