@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    const char *_notificationName;
    int _notificationToken;
}

- (void)dealloc;
- (void)didRemoveLastObserver;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;
- (id)initWithNotificationName:(const char *)a0;
- (const char *)notificationName;
- (void)didAddFirstObserver;
- (id)initWithName:(id)a0;

@end
