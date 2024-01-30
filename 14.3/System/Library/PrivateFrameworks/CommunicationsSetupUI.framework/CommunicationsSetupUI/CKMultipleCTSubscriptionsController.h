@class NSString, NSArray;

@interface CKMultipleCTSubscriptionsController : PSListController

@property (copy, nonatomic) NSString *defaultsKey;
@property (copy, nonatomic) NSString *headerKey;
@property (copy, nonatomic) NSString *controllerTitle;
@property (retain, nonatomic) NSArray *ctSubscriptions;

- (void).cxx_destruct;
- (void)systemApplicationWillEnterForeground;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setEnabledForSubscription:(id)a0 specifier:(id)a1;
- (id)isEnabledForSubscription:(id)a0;

@end
