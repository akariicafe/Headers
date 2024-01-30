@class LPLinkMetadata;

@interface CKReplyContextTranscriptPluginChatItem : CKMessagePartChatItem <CKReplyContext>

@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (char)color;
- (id)description;
- (void).cxx_destruct;
- (id)_imChatItem;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)a0;
- (BOOL)isReplyContextPreview;
- (id)mediaObject;
- (BOOL)replyIsFromMe;

@end
