@protocol CNObservable;

@interface _CNOnEmptyObservable : CNObservable {
    id<CNObservable> _nextObservable;
    BOOL _observableIsEmpty;
}

@property (retain, nonatomic) id<CNObservable> observable;

- (id)subscribe:(id)a0;
- (id)initWithObservable:(id)a0 nextObservable:(id)a1;
- (void).cxx_destruct;
- (void)observableDidSendResult;
- (id)subscribeNextObservable:(id)a0;
- (BOOL)isObservableEmpty;

@end
