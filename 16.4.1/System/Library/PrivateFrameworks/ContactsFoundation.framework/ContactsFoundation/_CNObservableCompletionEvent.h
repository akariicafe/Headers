@interface _CNObservableCompletionEvent : CNObservableEvent

- (void)dematerializeWithObserver:(id)a0;
- (BOOL)hasValue;
- (BOOL)isEqual:(id)a0;
- (id)value;
- (id)error;
- (unsigned long long)eventType;

@end
