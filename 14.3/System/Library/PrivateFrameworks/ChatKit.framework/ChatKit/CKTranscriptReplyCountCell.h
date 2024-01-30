@interface CKTranscriptReplyCountCell : CKTranscriptStatusCell

@property (nonatomic) double countAlpha;

- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void)clearFilters;
- (void)addFilter:(id)a0;
- (BOOL)hidesCheckmark;
- (void)performInsertion:(id /* block */)a0;
- (void)prepareForReuse;
- (void)_fadeInLabelAtStartTime:(double)a0 completion:(id /* block */)a1;
- (id)animationWithKeyPath:(id)a0 beginTime:(double)a1 duration:(double)a2 fromValue:(id)a3 toValue:(id)a4;
- (void)performRemoval:(id /* block */)a0;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)wantsDrawerLayout;
- (BOOL)shouldHideDuringDarkFSM;

@end
