@class CNObservable;

@interface CNAutocompleteCalendarQueryAssembler : NSObject

@property (readonly) CNObservable *rawCachedObservable;
@property (readonly) CNObservable *rawUncachedObservable;
@property (readonly) CNObservable *cachedObservable;
@property (readonly) CNObservable *uncachedObservable;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRawCachedObservable:(id)a0 rawUncachedObservable:(id)a1;
- (void)assemble;

@end
