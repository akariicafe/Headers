@class NSString, PXObservable;

@interface _PXStoryObservation : NSObject <PXChangeObserver, PXStoryStateWatchingRequest>

@property (readonly, weak, nonatomic) PXObservable *observable;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
