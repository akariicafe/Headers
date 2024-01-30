@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (id)initWithResult:(id)a0;
- (void)dematerializeWithObserver:(id)a0;
- (BOOL)hasValue;
- (BOOL)isEqual:(id)a0;
- (id)value;
- (unsigned long long)hash;
- (id)error;
- (unsigned long long)eventType;
- (id)description;
- (void).cxx_destruct;

@end
