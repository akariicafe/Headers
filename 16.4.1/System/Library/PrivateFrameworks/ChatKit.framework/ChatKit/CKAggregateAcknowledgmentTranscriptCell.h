@class CKAcknowledgmentBalloonView;

@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell

@property (retain, nonatomic) CKAcknowledgmentBalloonView *balloonView;
@property (nonatomic) BOOL parentMessageIsFromMe;

- (void)prepareForReuse;
- (void)animateVisibility:(BOOL)a0 completion:(id /* block */)a1;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performHide:(id /* block */)a0;
- (void)performInsertion:(id /* block */)a0;
- (void)performReveal:(id /* block */)a0;

@end
