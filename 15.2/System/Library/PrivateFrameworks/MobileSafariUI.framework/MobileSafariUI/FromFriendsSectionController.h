@class FromFriendsLibraryItemController;

@interface FromFriendsSectionController : LibrarySectionController {
    FromFriendsLibraryItemController *_friendsItemController;
}

- (id)title;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)itemControllers;
- (void)registerItemsWithRegistration:(id)a0;

@end
