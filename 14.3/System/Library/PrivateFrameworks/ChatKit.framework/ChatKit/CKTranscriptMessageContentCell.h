@class UILabel, NSAttributedString, UIView;

@interface CKTranscriptMessageContentCell : CKPhoneTranscriptMessageCell

@property (retain, nonatomic) UILabel *drawerLabel;
@property (nonatomic) BOOL drawerWasVisible;
@property (nonatomic) BOOL drawerTextChanged;
@property (nonatomic) struct CGSize { double width; double height; } drawerTextSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } drawerLabelFrame;
@property (copy, nonatomic) NSAttributedString *drawerText;
@property (nonatomic) struct CGSize { double width; double height; } messageDisplayViewRequestedSize;
@property (nonatomic) long long animationPauseReasons;
@property (readonly) UIView *messageDisplayView;

- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForDrawer;
- (void)layoutSubviewsForAlignmentContents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })messageDisplayViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)willLayoutDrawerLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
