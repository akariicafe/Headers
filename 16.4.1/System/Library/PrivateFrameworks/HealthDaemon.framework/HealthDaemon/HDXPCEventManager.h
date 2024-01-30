@class HDXPCEventPublisher;

@interface HDXPCEventManager : NSObject {
    HDXPCEventPublisher *_authorizationPublisher;
}

- (id)init;
- (void)authorizationChangedForBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
