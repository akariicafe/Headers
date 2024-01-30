@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem

@property (readonly, copy, nonatomic) NSString *locationText;

- (Class)balloonViewClass;
- (id)message;
- (void)configureBalloonView:(id)a0;
- (id)time;
- (id)sender;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)description;
- (BOOL)isFromMe;
- (BOOL)failed;

@end
