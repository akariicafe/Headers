@interface SAUIDelayedConfirmationView : SAUIConfirmationView

@property (nonatomic) long long autoConfirmDelay;

+ (id)delayedConfirmationView;
+ (id)delayedConfirmationViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
