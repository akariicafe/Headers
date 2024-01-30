@interface GameCenterUI.SharingScoreMessage : NSObject <UIActivityItemSource> {
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ leaderboard;
}

- (id)init;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;

@end
