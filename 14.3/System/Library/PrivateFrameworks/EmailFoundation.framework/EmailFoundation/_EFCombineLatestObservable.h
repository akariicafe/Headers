@class NSArray;

@interface _EFCombineLatestObservable : EFObservable

@property (copy, nonatomic) NSArray *observables;

- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservables:(id)a0;

@end
