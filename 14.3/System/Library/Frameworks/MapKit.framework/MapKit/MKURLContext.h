@class GEOCompanionRouteContext;

@interface MKURLContext : NSObject

@property (readonly, nonatomic) BOOL originatedFromWatch;
@property (readonly, copy, nonatomic) GEOCompanionRouteContext *companionRouteContext;

- (void).cxx_destruct;
- (id)initWithOriginatedFromWatch:(BOOL)a0 companionRouteContext:(id)a1;

@end
