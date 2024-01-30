@interface TabGroupLibrarySectionController : LibrarySectionController {
    BOOL _showSyncedGroups;
}

- (id)itemControllers;
- (id)initWithConfiguration:(id)a0 forSyncedGroups:(BOOL)a1;

@end
