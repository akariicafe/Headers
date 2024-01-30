@class NSArray, NSString, UIImage;

@interface NUArticleActivity : UIActivity {
    NSString *_activityType;
    NSString *_activityTitle;
    UIImage *_activityImage;
}

@property (readonly, copy, nonatomic) id /* block */ performBlock;
@property (retain, nonatomic) NSArray *activityItems;

- (id)activityType;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithActivityType:(id)a0 title:(id)a1 image:(id)a2 performBlock:(id /* block */)a3;

@end
