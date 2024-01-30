@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    const char *_notificationName;
    int _notificationToken;
}

- (void)didAddFirstObserver;
- (const char *)notificationName;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;
- (id)initWithName:(id)a0;
- (id)initWithNotificationName:(const char *)a0;
- (void)dealloc;
- (void)didRemoveLastObserver;

@end
