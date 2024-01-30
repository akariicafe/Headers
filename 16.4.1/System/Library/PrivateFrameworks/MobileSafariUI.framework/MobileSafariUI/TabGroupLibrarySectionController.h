@interface TabGroupLibrarySectionController : LibrarySectionController {
    BOOL _showNamedGroups;
}

- (id)itemControllers;
- (id)initWithConfiguration:(id)a0 forNamedGroups:(BOOL)a1;

@end
