@interface AppStoreKit.JSGameCenter : NSObject <_TtP11AppStoreKitP33_79A2108853F090A364F7262D37150EA919JSGameCenterExports_> {
    void /* unknown type, empty encoding */ dataProvider;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchFriendsThatPlayGame:(id)a0;
- (id)fetchAchievementSummaryForGame:(id)a0;
- (id)fetchRecentlyPlayedGamesWithinSeconds:(id)a0 :(long long)a1 :(long long)a2;
- (id)fetchGamesPopularWithFriends:(id)a0 :(long long)a1;
- (id)fetchSuggestedFriends:(long long)a0;
- (id)fetchRengagementDataForLocalPlayer;

@end
