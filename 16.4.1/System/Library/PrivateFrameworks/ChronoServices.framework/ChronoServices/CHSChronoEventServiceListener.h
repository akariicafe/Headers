@protocol CHSChronoEventServiceListenerDelegate;

@interface CHSChronoEventServiceListener : CHSWidgetEventServiceListener

@property (weak, nonatomic) id<CHSChronoEventServiceListenerDelegate> delegate;

@end
