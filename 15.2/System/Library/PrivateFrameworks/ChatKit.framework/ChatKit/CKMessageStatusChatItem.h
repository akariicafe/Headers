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

+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)todayDateFormatter;
+ (id)createImageAsTextAttachment;

- (id)now;
- (unsigned long long)layoutType;
- (id)time;
- (void)unloadSize;
- (struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (BOOL)isFromMe;
- (void).cxx_destruct;
- (long long)statusType;
- (void)unloadTranscriptText;
- (char)transcriptOrientation;
- (unsigned long long)count;
- (BOOL)wantsDrawerLayout;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (long long)expireStatusType;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })transcriptTextAlignmentInsets;
- (struct CGSize { double x0; double x1; })loadLabelSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct CGSize { double x0; double x1; })loadButtonSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)loadTranscriptButtonText;
- (id)effectsControlStatusTextForEffectStyleID:(id)a0;
- (id)loadTranscriptText;
- (Class)cellClass;

@end
