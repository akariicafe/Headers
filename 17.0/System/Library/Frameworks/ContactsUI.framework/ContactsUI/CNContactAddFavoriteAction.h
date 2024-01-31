@class CNUIFavoritesEntryPicker, CNFavorites, NSString;

@interface CNContactAddFavoriteAction : CNPropertyAction <CNUIFavoritesEntryPickerDelegate, CNPropertyContextMenuAction>

@property (retain, nonatomic) CNUIFavoritesEntryPicker *favoritesEntryPicker;
@property (readonly, nonatomic) CNFavorites *favorites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_saveFavorite:(id)a0;
- (BOOL)canPerformAction;
- (void)favoritesEntryPicker:(id)a0 didPickEntry:(id)a1;
- (id)initWithContact:(id)a0 propertyItems:(id)a1 favorites:(id)a2;
- (id /* block */)menuProviderForContextMenuInteraction:(id)a0;
- (void)performActionWithSender:(id)a0;

@end
