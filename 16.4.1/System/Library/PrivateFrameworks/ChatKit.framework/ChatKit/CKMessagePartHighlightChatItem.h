@class NSString;

@interface CKMessagePartHighlightChatItem : CKAssociatedMessageChatItem

@property (readonly, nonatomic) NSString *timestampString;

- (id)time;
- (id)sender;
- (id)guid;
- (Class)cellClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (BOOL)failed;
- (void).cxx_destruct;
- (BOOL)isFromMe;
- (id)associatedChatItemGUID;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })associatedMessageRange;
- (char)balloonOrientation;
- (Class)balloonViewClass;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; float x2; float x3; float x4; float x5; float x6; })geometryDescriptor;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)messagePartHighlightChatItem;
- (BOOL)parentMessageIsFromMe;
- (char)transcriptOrientation;
- (BOOL)wantsDrawerLayout;

@end
