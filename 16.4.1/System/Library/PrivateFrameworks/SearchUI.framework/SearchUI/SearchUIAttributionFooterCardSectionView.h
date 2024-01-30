@class TLKTextButton, SFAttributionFooterCardSection, TLKStackView;

@interface SearchUIAttributionFooterCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) TLKTextButton *leadingTextButton;
@property (retain, nonatomic) TLKTextButton *trailingTextButton;
@property (retain, nonatomic) SFAttributionFooterCardSection *cardSection;

+ (BOOL)prefersNoSeparatorAboveCardSection:(id)a0;
+ (void)removeIconsFromRichText:(id)a0;
+ (BOOL)supportsCustomUserReportRequestAfforance;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)configureMenuForTrailingFootnoteButton;
- (void)didPressLeadingTextButton;
- (void)didPressTrailingTextButton:(id)a0;
- (void)setUserInteractionEnabled:(BOOL)a0 forButton:(id)a1;
- (id)setupTextButtonThatIsLeadingAttribution:(BOOL)a0;
- (void)updateAttributionThatIsLeading:(BOOL)a0 withSection:(id)a1 isRTL:(BOOL)a2;

@end
