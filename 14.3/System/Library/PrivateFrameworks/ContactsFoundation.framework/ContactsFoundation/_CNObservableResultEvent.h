@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (id)initWithResult:(id)a0;
- (unsigned long long)eventType;
- (void).cxx_destruct;
- (id)value;
- (id)error;
- (unsigned long long)hash;
- (id)description;
- (BOOL)hasValue;
- (BOOL)isEqual:(id)a0;
- (void)dematerializeWithObserver:(id)a0;

@end
