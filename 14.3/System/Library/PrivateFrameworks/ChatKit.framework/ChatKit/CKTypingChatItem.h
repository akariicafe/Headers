@class CALayer;
@protocol IMTypingIndicatorLayerProtocol;

@interface CKTypingChatItem : CKChatItem

@property (readonly, nonatomic, getter=isFromMe) BOOL fromMe;
@property (readonly, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;

- (id)layoutItemSpacingForEnvironment:(id)a0 supplementaryItems:(id)a1;
- (char)transcriptOrientation;
- (BOOL)displayDuringSend;
- (unsigned long long)layoutType;
- (Class)cellClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (BOOL)wantsDrawerLayout;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
