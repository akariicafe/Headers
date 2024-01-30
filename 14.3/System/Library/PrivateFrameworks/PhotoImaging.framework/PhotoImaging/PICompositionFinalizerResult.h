@class NUComposition;

@interface PICompositionFinalizerResult : NSObject

@property (readonly) long long disposition;
@property (readonly, copy) NUComposition *composition;

- (void).cxx_destruct;
- (id)initWithDisposition:(long long)a0 composition:(id)a1;

@end
