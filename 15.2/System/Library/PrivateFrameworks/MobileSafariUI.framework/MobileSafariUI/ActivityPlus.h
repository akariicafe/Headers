@class NSString, UIImage;

@interface ActivityPlus : UIActivity {
    NSString *_activityType;
    NSString *_activityTitle;
    UIImage *_activityImage;
    id /* block */ _actionHandler;
}

- (id)activityType;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithTitle:(id)a0 image:(id)a1 type:(id)a2 handler:(id /* block */)a3;

@end
