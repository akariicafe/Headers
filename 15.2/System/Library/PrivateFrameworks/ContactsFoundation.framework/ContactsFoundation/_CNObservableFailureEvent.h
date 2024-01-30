@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (void)dematerializeWithObserver:(id)a0;
- (id)initWithError:(id)a0;
- (BOOL)hasValue;
- (id)value;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)eventType;
- (id)error;
- (unsigned long long)hash;

@end
