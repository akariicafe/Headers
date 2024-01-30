@interface SPLocalTopic : SFLocalTopic

+ (id)localTopicWithContactName:(id)a0 contactIdentifier:(id)a1;
+ (id)localTopicWithContactName:(id)a0 contactIdentifier:(id)a1 detailText:(id)a2;
+ (id)localTopicWithContactName:(id)a0 emails:(id)a1 phones:(id)a2 detailText:(id)a3;
+ (id)localTopicWithTitle:(id)a0;
+ (id)localTopicWithDictionaryResult:(id)a0;
+ (id)localTopicWithTitle:(id)a0 type:(int)a1 score:(id)a2;
+ (id)localTopicWithTitle:(id)a0 type:(int)a1 score:(id)a2 isCached:(BOOL)a3;
+ (id)localTopicWithTopicIdentifier:(id)a0;
+ (id)proactiveTopicWithIdentifier:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2 detailText:(id)a3;

- (id)initWithTopicIdentifier:(id)a0;
- (id)initWithContactName:(id)a0 contactIdentifier:(id)a1 detailText:(id)a2;
- (id)initWithContactName:(id)a0 emails:(id)a1 phones:(id)a2 detailText:(id)a3;
- (id)initWithDictionaryResult:(id)a0;
- (id)initWithTitle:(id)a0 type:(int)a1 score:(id)a2 isCached:(BOOL)a3;

@end
