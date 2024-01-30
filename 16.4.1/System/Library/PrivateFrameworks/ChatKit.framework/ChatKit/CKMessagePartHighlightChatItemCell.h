@class CKMessagePartHighlightBalloonView;

@interface CKMessagePartHighlightChatItemCell : CKAssociatedMessageTranscriptCell

@property (retain, nonatomic) CKMessagePartHighlightBalloonView *highlightBalloonView;

- (id)accessibilityIdentifier;
- (void)prepareForReuse;
- (void)performRemoval:(id /* block */)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performHide:(id /* block */)a0;
- (void)performInsertion:(id /* block */)a0;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performReveal:(id /* block */)a0;

@end
