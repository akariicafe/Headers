@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (id)initWithError:(id)a0;
- (unsigned long long)eventType;
- (void).cxx_destruct;
- (id)value;
- (id)error;
- (unsigned long long)hash;
- (BOOL)hasValue;
- (BOOL)isEqual:(id)a0;
- (void)dematerializeWithObserver:(id)a0;

@end
