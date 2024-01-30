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

+ (id)todayDateFormatter;
+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)createImageAsTextAttachment;

- (id)time;
- (long long)statusType;
- (void).cxx_destruct;
- (char)transcriptOrientation;
- (unsigned long long)layoutType;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })size;
- (void)unloadSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (BOOL)isFromMe;
- (void)unloadTranscriptText;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })transcriptTextAlignmentInsets;
- (BOOL)wantsDrawerLayout;
- (long long)expireStatusType;
- (struct CGSize { double x0; double x1; })loadLabelSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)loadTranscriptButtonText;
- (struct CGSize { double x0; double x1; })loadButtonSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)effectsControlStatusTextForEffectStyleID:(id)a0;
- (unsigned long long)count;
- (id)now;
- (id)loadTranscriptText;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)layoutGroupSpacingForEnvironment:(id)a0 supplementaryItems:(id)a1;

@end
