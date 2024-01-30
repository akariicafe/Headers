@class SBReachabilityManager;

@interface SBReachabilitySceneController : NSObject {
    SBReachabilityManager *_reachabilityManager;
}

@property (readonly, nonatomic) double effectiveReachabilityYOffset;

- (id)initWithWindowScene:(id)a0;
- (void).cxx_destruct;

@end
