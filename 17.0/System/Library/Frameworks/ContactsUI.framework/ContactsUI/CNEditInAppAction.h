@class CNUIUserActivityManager;

@interface CNEditInAppAction : CNContactAction

@property (readonly, nonatomic) CNUIUserActivityManager *activityManager;

- (void).cxx_destruct;
- (id)title;
- (id)initWithContact:(id)a0 activityManager:(id)a1;
- (void)performActionWithSender:(id)a0;

@end
