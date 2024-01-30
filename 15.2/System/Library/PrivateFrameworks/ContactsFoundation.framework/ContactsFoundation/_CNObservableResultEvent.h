@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (void)dematerializeWithObserver:(id)a0;
- (id)initWithResult:(id)a0;
- (BOOL)hasValue;
- (id)value;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)eventType;
- (id)error;
- (unsigned long long)hash;

@end
