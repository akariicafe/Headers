@class UIImage, NSString, UIViewController;
@protocol SUActivityDelegate;

@interface SUActivity : UIActivity {
    UIImage *_suActivityImage;
    NSString *_suActivityTitle;
    NSString *_suActivityType;
    UIViewController *_suActivityViewController;
}

@property (weak, nonatomic) id<SUActivityDelegate> ITunesStoreDelegate;

- (void)setActivityType:(id)a0;
- (id)activityType;
- (void)setActivityTitle:(id)a0;
- (id)activityViewController;
- (void)setActivityViewController:(id)a0;
- (void)dealloc;
- (void)setActivityImage:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
