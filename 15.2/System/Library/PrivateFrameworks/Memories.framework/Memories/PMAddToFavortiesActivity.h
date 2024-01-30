@protocol PMAddToFavortiesActivityDelegate;

@interface PMAddToFavortiesActivity : UIActivity

@property (weak, nonatomic) id<PMAddToFavortiesActivityDelegate> delegate;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
