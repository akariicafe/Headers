@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (void)dematerializeWithObserver:(id)a0;
- (BOOL)hasValue;
- (BOOL)isEqual:(id)a0;
- (id)value;
- (unsigned long long)hash;
- (id)error;
- (id)initWithError:(id)a0;
- (unsigned long long)eventType;
- (void).cxx_destruct;

@end
