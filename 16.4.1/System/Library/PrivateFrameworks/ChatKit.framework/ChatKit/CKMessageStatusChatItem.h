@class NSAttributedString;

@interface CKMessageStatusChatItem : CKChatItem

@property (copy, nonatomic) NSAttributedString *transcriptButtonText;
@property (nonatomic, getter=isButtonSizeLoaded) BOOL buttonSizeLoaded;
@property (nonatomic, getter=isLabelSizeLoaded) BOOL labelSizeLoaded;
@property (readonly, nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } labelSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } buttonTextAlignmentInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelTextAlignmentInsets;
@property (readonly, nonatomic) long long buttonType;
@property (readonly, nonatomic) char statusAlignment;
@property (readonly, nonatomic) BOOL allowsEffectAutoPlayback;
@property (readonly, nonatomic) BOOL shouldHideDuringDarkFSM;

+ (id)createImageAsTextAttachment;
+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)todayDateFormatter;

- (unsigned long long)layoutType;
- (id)time;
- (id)now;
- (Class)cellClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (long long)statusType;
- (unsigned long long)count;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (BOOL)isFromMe;
- (id)_styledStatusTextWithStatusText:(id)a0 orientation:(char)a1 dateSubText:(id)a2 buttonSubText:(id)a3 errorSubText:(id)a4 overrideTextColor:(id)a5 shouldReplaceWarningIcon:(BOOL)a6;
- (id)createReplayText;
- (id)effectsControlStatusTextForEffectStyleID:(id)a0;
- (long long)expireStatusType;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (struct CGSize { double x0; double x1; })loadButtonSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct CGSize { double x0; double x1; })loadLabelSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)loadTranscriptButtonText;
- (id)loadTranscriptText;
- (char)transcriptOrientation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })transcriptTextAlignmentInsets;
- (void)unloadSize;
- (void)unloadTranscriptText;
- (BOOL)wantsDrawerLayout;

@end
