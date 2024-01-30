@protocol SBFailureNotifyingTapGestureRecognizerDelegate;

@interface SBFailureNotifyingTapGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) id<SBFailureNotifyingTapGestureRecognizerDelegate> delegate;

- (void)setState:(long long)a0;

@end
