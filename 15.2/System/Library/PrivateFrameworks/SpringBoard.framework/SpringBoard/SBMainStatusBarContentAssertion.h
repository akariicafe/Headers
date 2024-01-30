@interface SBMainStatusBarContentAssertion : BSSimpleAssertion

@property (nonatomic) BOOL animated;
@property (nonatomic) double duration;
@property (nonatomic) BOOL dateAndTimeVisible;

- (id)initWithIdentifier:(id)a0 forReason:(id)a1;

@end
