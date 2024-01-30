@protocol ATMessageLinkListenerDelegate;

@interface ATMessageLinkListener : NSObject

@property (weak, nonatomic) id<ATMessageLinkListenerDelegate> delegate;

- (BOOL)start;
- (void).cxx_destruct;
- (void)stop;

@end
