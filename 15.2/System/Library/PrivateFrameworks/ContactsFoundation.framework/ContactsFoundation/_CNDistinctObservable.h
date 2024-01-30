@class NSMutableSet;
@protocol CNObservable;

@interface _CNDistinctObservable : CNObservable {
    id<CNObservable> _observable;
    NSMutableSet *_previouslyObservedResults;
}

- (id)initWithObservable:(id)a0;
- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (BOOL)_resultIsDistinct:(id)a0;

@end
