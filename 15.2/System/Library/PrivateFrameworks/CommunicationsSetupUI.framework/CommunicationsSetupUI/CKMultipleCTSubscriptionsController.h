@class NSString, NSArray;

@interface CKMultipleCTSubscriptionsController : PSListController

@property (copy, nonatomic) NSString *defaultsKey;
@property (copy, nonatomic) NSString *headerKey;
@property (copy, nonatomic) NSString *controllerTitle;
@property (retain, nonatomic) NSArray *ctSubscriptions;

- (id)specifiers;
- (void)systemApplicationWillEnterForeground;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)setEnabledForSubscription:(id)a0 specifier:(id)a1;
- (id)isEnabledForSubscription:(id)a0;

@end
