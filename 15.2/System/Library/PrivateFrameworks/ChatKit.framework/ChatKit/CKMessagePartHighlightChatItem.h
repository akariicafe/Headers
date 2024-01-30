@class NSString;

@interface CKMessagePartHighlightChatItem : CKAssociatedMessageChatItem

@property (readonly, nonatomic) NSString *timestampString;

- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (char)balloonOrientation;
- (Class)balloonViewClass;
- (id)time;
- (id)sender;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (id)guid;
- (BOOL)isFromMe;
- (void).cxx_destruct;
- (id)associatedChatItemGUID;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })associatedMessageRange;
- (char)transcriptOrientation;
- (BOOL)wantsDrawerLayout;
- (BOOL)failed;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; float x2; float x3; float x4; float x5; float x6; })geometryDescriptor;
- (id)messagePartHighlightChatItem;
- (BOOL)parentMessageIsFromMe;
- (Class)cellClass;

@end
