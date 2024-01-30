@class UINavigationController, EKUILabeledAvatarView, EKParticipant, UILabel, NSMutableArray;

@interface EKUIParticipantContainer : UIView

@property (retain) EKParticipant *participant;
@property (retain) EKUILabeledAvatarView *avatar;
@property (retain) UILabel *nameLabel;
@property (retain) UILabel *subLabel;
@property (retain) NSMutableArray *labelConstraints;
@property (weak) UINavigationController *navController;

- (void).cxx_destruct;
- (void)setBusy:(BOOL)a0;
- (id)initWithParticipant:(id)a0 viewController:(id)a1;
- (void)singleTap:(id)a0;
- (void)updateContentForSizeCategoryChange:(id)a0;
- (void)updateSublabelWithState:(unsigned long long)a0;

@end
