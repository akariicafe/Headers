@class CNUIFavoritesEntryPicker, CNFavorites, NSString;

@interface CNContactAddFavoriteAction : CNPropertyAction <CNUIFavoritesEntryPickerDelegate>

@property (retain, nonatomic) CNUIFavoritesEntryPicker *favoritesEntryPicker;
@property (readonly, nonatomic) CNFavorites *favorites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canPerformAction;
- (void)performActionWithSender:(id)a0;
- (void)favoritesEntryPicker:(id)a0 didPickEntry:(id)a1;
- (void)_saveFavorite:(id)a0;
- (id)initWithContact:(id)a0 propertyItems:(id)a1 favorites:(id)a2;

@end
