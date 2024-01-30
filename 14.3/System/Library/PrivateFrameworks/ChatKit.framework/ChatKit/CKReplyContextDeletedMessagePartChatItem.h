@interface CKReplyContextDeletedMessagePartChatItem : CKReplyContextTextMessagePartChatItem <CKReplyContext>

- (BOOL)isEditable;
- (id)contact;
- (char)transcriptOrientation;
- (BOOL)itemIsReplyContextPreview;
- (char)balloonOrientation;
- (char)color;
- (BOOL)isFromMe;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (id)loadTranscriptText;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
