@class NSString, CNObservable;

@interface CNAutocompleteObservable : CNObservable

@property (retain, nonatomic) CNObservable *observable;
@property (retain, nonatomic) NSString *debugDescription;

- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
