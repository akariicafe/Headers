@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell

@property (retain, nonatomic) UIButton *failureButton;
@property (nonatomic) BOOL chatEligibleForContactImage;
@property (nonatomic) BOOL wantsContactImageLayout;
@property (nonatomic) BOOL isReply;
@property (nonatomic) BOOL isReplyContextPreview;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL failed;
@property (readonly, nonatomic) BOOL failureButtonAdjustsContentAlignmentRect;

+ (double)failureButtonWidthPlusSpacing;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void).cxx_destruct;
- (void)layoutSubviewsForContents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contactImageViewFrame;
- (id)description;
- (id)contactImageView;

@end
