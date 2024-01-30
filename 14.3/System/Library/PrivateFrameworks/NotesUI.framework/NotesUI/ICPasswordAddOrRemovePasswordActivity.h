@class ICNote, UIWindow;

@interface ICPasswordAddOrRemovePasswordActivity : ICRDActivity

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ willPerformActivityBlock;
@property (retain, nonatomic) ICNote *note;
@property (weak, nonatomic) UIWindow *displayWindow;

+ (long long)activityCategory;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)performActivity;
- (void)accessibilityAnnounceAddOrRemovePasswordWithIntent:(unsigned long long)a0 withNote:(id)a1;
- (id)initWithNote:(id)a0 displayWindow:(id)a1 willPerformActivityBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
