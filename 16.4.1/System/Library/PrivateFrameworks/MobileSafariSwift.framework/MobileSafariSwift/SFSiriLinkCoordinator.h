@class NSString, _SFSiriLinkCoordinator;
@protocol SFSiriLinkActionPerformer;

@interface SFSiriLinkCoordinator : NSObject <_SFSiriLinkActionPerformer> {
    _SFSiriLinkCoordinator *_internal;
}

@property (weak, nonatomic) id<SFSiriLinkActionPerformer> actionPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setApplicationProxy:(id)a0;

- (void)setReaderModeEnabled:(BOOL)a0;
- (void)openStartPage;
- (void)openTabWithUUID:(id)a0;
- (void)setView:(unsigned long long)a0 visible:(BOOL)a1;
- (void)openBookmarkWithUUIDString:(id)a0;
- (id)tabEntityInteractionWithUUID:(id)a0;
- (void)navigateContinuousReadingListToDirection:(unsigned long long)a0;
- (void)toggleReaderMode;
- (id)changeReaderModeInteraction;
- (void)createNewTabGroupWithTitle:(id)a0;
- (void)createNewBookmarkWithTitle:(id)a0;
- (void)closeStartPage;
- (id)openViewInteraction;
- (id)closeTabInteraction;
- (void)createReadingListItem;
- (id)openReadingListItemInteraction;
- (id)createNewPrivateTabInteraction;
- (id)createReadingListItemInteraction;
- (id)createNewBookmarkInteraction;
- (void)createNewPrivateTab;
- (id)openBookmarkInteraction;
- (void)closeTabWithUUID:(id)a0;
- (void)openTabGroupOfKind:(long long)a0 uuidString:(id)a1;
- (id)openTabInteraction;
- (id)init;
- (void)performSearchUsingQuery:(id)a0;
- (id)navigateContinuousReadingListInteraction;
- (id)createNewTabInteraction;
- (id)openTabGroupInteraction;
- (id)webSearchInteraction;
- (void).cxx_destruct;
- (void)createNewTab;
- (id)closeViewInteraction;
- (id)createNewTabGroupInteraction;

@end
