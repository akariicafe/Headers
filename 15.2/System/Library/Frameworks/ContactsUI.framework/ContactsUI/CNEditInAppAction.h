@class CNUIUserActivityManager;

@interface CNEditInAppAction : CNContactAction

@property (readonly, nonatomic) CNUIUserActivityManager *activityManager;

- (id)title;
- (void)performActionWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 activityManager:(id)a1;

@end
