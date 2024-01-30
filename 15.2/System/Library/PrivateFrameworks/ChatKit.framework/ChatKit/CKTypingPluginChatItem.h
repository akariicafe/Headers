@class NSString, NSData;

@interface CKTypingPluginChatItem : CKTypingChatItem

@property (copy, nonatomic) NSString *plugInBundleID;
@property (readonly, nonatomic) NSData *typingIndicatorData;

- (id)iconImage;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (id)indicatorLayer;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void).cxx_destruct;
- (Class)cellClass;

@end
