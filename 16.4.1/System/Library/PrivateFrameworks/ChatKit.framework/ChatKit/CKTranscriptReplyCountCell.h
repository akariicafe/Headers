@interface CKTranscriptReplyCountCell : CKTranscriptStatusCell

@property (nonatomic) double countAlpha;

- (void)addFilter:(id)a0;
- (void)clearFilters;
- (void)prepareForReuse;
- (void)performRemoval:(id /* block */)a0;
- (void)_fadeInLabelAtStartTime:(double)a0 completion:(id /* block */)a1;
- (id)animationWithKeyPath:(id)a0 beginTime:(double)a1 duration:(double)a2 fromValue:(id)a3 toValue:(id)a4;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (BOOL)hidesCheckmark;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)a0;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)shouldHideDuringDarkFSM;
- (BOOL)wantsDrawerLayout;

@end
