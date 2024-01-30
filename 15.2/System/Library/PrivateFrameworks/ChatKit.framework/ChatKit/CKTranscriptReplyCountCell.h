@interface CKTranscriptReplyCountCell : CKTranscriptStatusCell

@property (nonatomic) double countAlpha;

- (BOOL)hidesCheckmark;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)addFilter:(id)a0;
- (void)prepareForReuse;
- (void)_fadeInLabelAtStartTime:(double)a0 completion:(id /* block */)a1;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performRemoval:(id /* block */)a0;
- (BOOL)wantsDrawerLayout;
- (id)animationWithKeyPath:(id)a0 beginTime:(double)a1 duration:(double)a2 fromValue:(id)a3 toValue:(id)a4;
- (BOOL)shouldHideDuringDarkFSM;
- (void)clearFilters;

@end
