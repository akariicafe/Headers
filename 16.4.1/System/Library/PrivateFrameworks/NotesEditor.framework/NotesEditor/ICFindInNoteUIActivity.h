@protocol ICFindInNoteUIActivityDelegate;

@interface ICFindInNoteUIActivity : UIActivity

@property (weak, nonatomic) id<ICFindInNoteUIActivityDelegate> delegate;

- (id)activityTitle;
- (id)activityType;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (long long)activityCategory;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
