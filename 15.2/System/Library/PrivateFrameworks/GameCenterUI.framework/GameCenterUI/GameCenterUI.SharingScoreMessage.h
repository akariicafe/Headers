@interface GameCenterUI.SharingScoreMessage : NSObject <UIActivityItemSource> {
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ leaderboard;
}

- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
