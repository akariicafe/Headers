@protocol PMAddToFavortiesActivityDelegate;

@interface PMAddToFavortiesActivity : UIActivity

@property (weak, nonatomic) id<PMAddToFavortiesActivityDelegate> delegate;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;

@end
