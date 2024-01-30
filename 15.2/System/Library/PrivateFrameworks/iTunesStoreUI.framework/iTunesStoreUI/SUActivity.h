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
- (void)setActivityViewController:(id)a0;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityImage;
- (void)setActivityTitle:(id)a0;
- (void)setActivityImage:(id)a0;
- (id)activityTitle;
- (void)dealloc;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
