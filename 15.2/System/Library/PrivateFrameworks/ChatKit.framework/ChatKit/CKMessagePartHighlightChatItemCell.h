@class CKMessagePartHighlightBalloonView;

@interface CKMessagePartHighlightChatItemCell : CKAssociatedMessageTranscriptCell

@property (retain, nonatomic) CKMessagePartHighlightBalloonView *highlightBalloonView;

- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)a0;
- (id)accessibilityIdentifier;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)prepareForReuse;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performRemoval:(id /* block */)a0;
- (void)performHide:(id /* block */)a0;
- (void)performReveal:(id /* block */)a0;

@end
