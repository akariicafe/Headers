@class NSString;

@interface NSObservationTransformer : NSObservationSource <NSObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mapValuesWithBlock:(id /* block */)a0;
+ (id)mapErrorsWithBlock:(id /* block */)a0;


@end
