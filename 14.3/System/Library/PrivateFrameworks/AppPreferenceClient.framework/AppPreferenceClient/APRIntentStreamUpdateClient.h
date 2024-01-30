@interface APRIntentStreamUpdateClient : NSObject <APRIntentStreamUpdateInterface>

+ (id)sharedInstance;

- (void)notifyAboutIntentStreamChangeWithReply:(id /* block */)a0;

@end
