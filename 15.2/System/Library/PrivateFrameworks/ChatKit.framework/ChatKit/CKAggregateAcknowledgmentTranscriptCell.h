@class CKAcknowledgmentBalloonView;

@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell

@property (retain, nonatomic) CKAcknowledgmentBalloonView *balloonView;
@property (nonatomic) BOOL parentMessageIsFromMe;

- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)prepareForReuse;

@end
