@class CALayer;
@protocol IMTypingIndicatorLayerProtocol;

@interface CKTypingChatItem : CKChatItem

@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;

- (unsigned long long)layoutType;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (char)transcriptOrientation;
- (BOOL)displayDuringSend;
- (BOOL)wantsDrawerLayout;
- (Class)cellClass;

@end
