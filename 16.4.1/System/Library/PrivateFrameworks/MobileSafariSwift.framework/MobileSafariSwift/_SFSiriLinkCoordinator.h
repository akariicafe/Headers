@interface _SFSiriLinkCoordinator : NSObject

@property (nonatomic, weak) void /* unknown type, empty encoding */ actionPerformer;

+ (void)setApplicationProxy:(id)a0;

- (id)tabEntityInteractionWithUUID:(id)a0;
- (id)changeReaderModeInteraction;
- (id)openViewInteraction;
- (id)closeTabInteraction;
- (id)openReadingListItemInteraction;
- (id)createNewPrivateTabInteraction;
- (id)createReadingListItemInteraction;
- (id)createNewBookmarkInteraction;
- (id)openBookmarkInteraction;
- (id)openTabInteraction;
- (id)init;
- (id)navigateContinuousReadingListInteraction;
- (id)createNewTabInteraction;
- (id)openTabGroupInteraction;
- (id)webSearchInteraction;
- (void).cxx_destruct;
- (id)closeViewInteraction;
- (id)createNewTabGroupInteraction;

@end
