@class NSString, NSData;

@interface CKTypingPluginChatItem : CKTypingChatItem

@property (copy, nonatomic) NSString *plugInBundleID;
@property (readonly, nonatomic) NSData *typingIndicatorData;

- (id)iconImage;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)indicatorLayer;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
