@class NSAttributedString, IMUnavailabilityIndicatorChatItem;

@interface CKUnavailabilityIndicatorChatItem : CKChatItem

@property (retain, nonatomic) NSAttributedString *unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton;
@property (retain, nonatomic) NSAttributedString *unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton;
@property (readonly, nonatomic) BOOL displayNotifyAnywayButton;
@property (readonly, nonatomic) IMUnavailabilityIndicatorChatItem *imUnavailabilityIndicatorChatItem;

- (unsigned long long)layoutType;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void).cxx_destruct;
- (void)unloadTranscriptText;
- (char)transcriptOrientation;
- (BOOL)displayDuringSend;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (void)_loadUnavailableTitleLabelTextVariants;
- (id)_unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton:(BOOL)a0;
- (id)loadTranscriptText;
- (Class)cellClass;

@end
