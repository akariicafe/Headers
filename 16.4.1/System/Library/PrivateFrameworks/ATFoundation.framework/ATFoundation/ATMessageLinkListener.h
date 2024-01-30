@protocol ATMessageLinkListenerDelegate;

@interface ATMessageLinkListener : NSObject

@property (weak, nonatomic) id<ATMessageLinkListenerDelegate> delegate;

- (void)stop;
- (BOOL)start;
- (void).cxx_destruct;

@end
