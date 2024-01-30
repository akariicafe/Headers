@protocol ATMessageLinkListenerDelegate;

@interface ATMessageLinkListener : NSObject

@property (weak, nonatomic) id<ATMessageLinkListenerDelegate> delegate;

- (void).cxx_destruct;
- (void)stop;
- (BOOL)start;

@end
