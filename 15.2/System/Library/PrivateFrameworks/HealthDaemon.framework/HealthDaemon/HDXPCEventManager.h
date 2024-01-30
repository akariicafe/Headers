@class HDXPCEventPublisher;

@interface HDXPCEventManager : NSObject {
    HDXPCEventPublisher *_authorizationPublisher;
}

- (void)authorizationChangedForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
