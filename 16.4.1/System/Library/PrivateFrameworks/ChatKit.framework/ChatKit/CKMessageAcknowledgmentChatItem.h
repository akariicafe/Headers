@class UIColor, NSString;

@interface CKMessageAcknowledgmentChatItem : CKAssociatedMessageChatItem <CKMessageAcknowledgment>

@property (readonly, nonatomic) char balloonOrientation;
@property (readonly, nonatomic) char balloonColorType;
@property (readonly, nonatomic) long long messageAcknowledgmentType;
@property (readonly, nonatomic) UIColor *acknowledgmentImageColor;
@property (readonly, nonatomic) NSString *acknowledgmentImageName;
@property (readonly, nonatomic) UIColor *selectedAcknowledgmentImageColor;
@property (readonly, nonatomic) UIColor *selectedBalloonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)themeColor;
- (id)sender;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)messageAcknowledgmentChatItem;
- (long long)themeStyle;
- (char)transcriptOrientation;
- (BOOL)wantsDrawerLayout;

@end
