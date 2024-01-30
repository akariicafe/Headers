@protocol CNObservable;

@interface _CNOnEmptyObservable : CNObservable {
    id<CNObservable> _nextObservable;
    BOOL _observableIsEmpty;
}

@property (retain, nonatomic) id<CNObservable> observable;

- (BOOL)isObservableEmpty;
- (id)initWithObservable:(id)a0 nextObservable:(id)a1;
- (id)subscribeNextObservable:(id)a0;
- (void).cxx_destruct;
- (void)observableDidSendResult;
- (id)subscribe:(id)a0;

@end
