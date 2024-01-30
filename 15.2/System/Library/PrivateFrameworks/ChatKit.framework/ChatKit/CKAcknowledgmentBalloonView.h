@class CKAcknowledgmentGlyphView;

@interface CKAcknowledgmentBalloonView : CKBalloonView

@property (nonatomic) unsigned long long stackCount;
@property (nonatomic) long long coloredPart;
@property (retain, nonatomic) CKAcknowledgmentGlyphView *glyphView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureForAggregateAcknowledgmentChatItem:(id)a0;

@end
