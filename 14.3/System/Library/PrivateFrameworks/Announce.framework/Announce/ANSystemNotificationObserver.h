@interface ANSystemNotificationObserver : NSObject

@property (copy) id /* block */ observerHandler;

+ (id)observer:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startObservingNotifications;
- (id)initWithHandler:(id /* block */)a0;
- (void)removeNotificationObservers;
- (void)_languageDidChange;

@end
