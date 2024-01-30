@class NSString, UIImage;

@interface ICBlockUIActivity : UIActivity

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *type;

- (id)activityType;
- (id)initWithTitle:(id)a0 block:(id /* block */)a1;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)activityImage;
- (id)activityTitle;
- (long long)activityCategory;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithTitle:(id)a0 image:(id)a1 activityType:(id)a2 block:(id /* block */)a3;
- (id)initWithTitle:(id)a0 systemImageName:(id)a1 activityType:(id)a2 block:(id /* block */)a3;
- (id)initWithTitle:(id)a0 image:(id)a1 block:(id /* block */)a2;
- (id)initWithTitle:(id)a0 systemImageName:(id)a1 block:(id /* block */)a2;

@end
