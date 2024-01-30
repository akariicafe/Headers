@interface ANSystemNotificationObserver : NSObject

@property (copy) id /* block */ observerHandler;

+ (id)observer:(id /* block */)a0;

- (void)removeNotificationObservers;
- (void)dealloc;
- (void)startObservingNotifications;
- (id)initWithHandler:(id /* block */)a0;
- (id)init;
- (void)_languageDidChange;
- (void).cxx_destruct;

@end
