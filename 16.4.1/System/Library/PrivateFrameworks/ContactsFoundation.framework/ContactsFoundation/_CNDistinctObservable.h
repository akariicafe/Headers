@class NSMutableSet;
@protocol CNObservable;

@interface _CNDistinctObservable : CNObservable {
    id<CNObservable> _observable;
    NSMutableSet *_previouslyObservedResults;
}

- (id)subscribe:(id)a0;
- (id)initWithObservable:(id)a0;
- (void).cxx_destruct;
- (BOOL)_resultIsDistinct:(id)a0;

@end
