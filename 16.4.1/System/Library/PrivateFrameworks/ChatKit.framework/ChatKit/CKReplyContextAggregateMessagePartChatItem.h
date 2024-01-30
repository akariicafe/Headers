@interface CKReplyContextAggregateMessagePartChatItem : CKAggregateMessagePartChatItem <CKReplyContext>

- (char)color;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (char)balloonStyle;
- (Class)balloonViewClass;
- (id)bodyTextFont;
- (BOOL)isReplyContextPreview;
- (id)loadTranscriptDrawerText;
- (BOOL)replyIsFromMe;
- (BOOL)wantsOutline;

@end
