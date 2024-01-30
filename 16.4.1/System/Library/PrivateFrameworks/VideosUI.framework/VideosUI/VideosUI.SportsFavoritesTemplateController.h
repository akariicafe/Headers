@interface VideosUI.SportsFavoritesTemplateController : VideosUI.StackTemplateController {
    void /* unknown type, empty encoding */ syncTeamFavorites;
    void /* unknown type, empty encoding */ templateUpdateObserver;
    void /* unknown type, empty encoding */ teamsServiceRequest;
    void /* unknown type, empty encoding */ favoriteTeamsBefore;
}

- (void)onAuthenticationDidChange:(id)a0;
- (void)onFavoritesCacheUpdated:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewDidLoad;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vuiCollectionView:(id)a0 didSelectItemAt:(id)a1;
- (void)vuiCollectionView:(id)a0 willDisplay:(id)a1 for:(id)a2;

@end
