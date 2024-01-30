@interface CKReplyContextTextMessagePartChatItem : CKTextMessagePartChatItem <CKReplyContext>

- (Class)balloonViewClass;
- (BOOL)replyIsFromMe;
- (BOOL)isEditable;
- (BOOL)isReplyContextPreview;
- (id)loadTranscriptDrawerText;
- (char)color;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (char)balloonStyle;
- (id)bodyTextFont;
- (BOOL)wantsOutline;
- (BOOL)shouldUseBigEmoji;
- (id)meMentionsTextColor;

@end
