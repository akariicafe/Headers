@class CALayer;
@protocol CKTypingIndicatorLayerProtocol;

@interface CKTypingChatItem : CKChatItem

@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) CALayer<CKTypingIndicatorLayerProtocol> *indicatorLayer;

- (unsigned long long)layoutType;
- (Class)cellClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (BOOL)displayDuringSend;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (char)transcriptOrientation;
- (BOOL)wantsDrawerLayout;

@end
