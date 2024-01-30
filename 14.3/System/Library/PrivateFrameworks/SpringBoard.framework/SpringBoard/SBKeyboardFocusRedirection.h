@class BKSHIDEventDeferringToken;

@interface SBKeyboardFocusRedirection : BSSimpleAssertion

@property (nonatomic) int fromProcessIdentifier;
@property (copy, nonatomic) BKSHIDEventDeferringToken *fromToken;
@property (nonatomic) int toProcessIdentifier;
@property (copy, nonatomic) BKSHIDEventDeferringToken *toToken;

- (void).cxx_destruct;
- (id)description;

@end
