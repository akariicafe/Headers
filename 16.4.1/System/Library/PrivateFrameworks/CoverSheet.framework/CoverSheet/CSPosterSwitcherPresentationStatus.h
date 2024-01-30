@interface CSPosterSwitcherPresentationStatus : NSObject

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long notReadyReason;
@property (readonly, nonatomic) BOOL shouldProvideNotReadyFeedback;

- (id)initWithState:(unsigned long long)a0 notReadyReason:(unsigned long long)a1;

@end
