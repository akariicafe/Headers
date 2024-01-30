@protocol CNObservable;

@interface _CNOnEmptyObservable : CNObservable {
    id<CNObservable> _nextObservable;
    BOOL _observableIsEmpty;
}

@property (retain, nonatomic) id<CNObservable> observable;

- (id)subscribe:(id)a0;
- (id)subscribeNextObservable:(id)a0;
- (id)initWithObservable:(id)a0 nextObservable:(id)a1;
- (BOOL)isObservableEmpty;
- (void).cxx_destruct;
- (void)observableDidSendResult;

@end
