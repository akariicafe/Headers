@interface _CNObservableCompletionEvent : CNObservableEvent

- (void)dematerializeWithObserver:(id)a0;
- (BOOL)hasValue;
- (id)value;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)eventType;
- (id)error;

@end
