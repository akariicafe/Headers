@class SXLayoutOptions, NFPendingPromise;
@protocol SXComponent;

@interface SXPendingLayoutInvalidation : NSObject

@property (readonly, nonatomic) id<SXComponent> component;
@property (readonly, nonatomic) NFPendingPromise *pendingPromise;
@property (readonly, nonatomic) SXLayoutOptions *layoutOptions;
@property (readonly, nonatomic) id /* block */ invalidation;

- (void).cxx_destruct;
- (id)initWithComponent:(id)a0 pendingPromise:(id)a1 layoutOptions:(id)a2 invalidation:(id /* block */)a3;

@end
