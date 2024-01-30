@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    const char *_notificationName;
    int _notificationToken;
}

- (const char *)notificationName;
- (id)initWithNotificationName:(const char *)a0;
- (void)didAddFirstObserver;
- (id)initWithName:(id)a0;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;
- (void)dealloc;
- (void)didRemoveLastObserver;

@end
