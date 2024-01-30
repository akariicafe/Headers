@interface SKUIReviewInAppRatingAction : UIInterfaceAction

@property (copy, nonatomic) id /* block */ beforeDismissHandler;
@property (copy, nonatomic) id /* block */ afterDismissHandler;

+ (id)actionWithCustomContentViewController:(id)a0;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)setCustomEnabledState:(BOOL)a0;

@end
