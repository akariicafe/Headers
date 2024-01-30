@class CNUIUserActivityManager;

@interface CNEditInAppAction : CNContactAction

@property (readonly, nonatomic) CNUIUserActivityManager *activityManager;

- (void).cxx_destruct;
- (void)performActionWithSender:(id)a0;
- (id)initWithContact:(id)a0 activityManager:(id)a1;
- (id)title;

@end
