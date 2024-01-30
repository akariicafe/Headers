@class HDXPCEventPublisher;

@interface HDXPCEventManager : NSObject {
    HDXPCEventPublisher *_authorizationPublisher;
}

- (id)init;
- (void).cxx_destruct;
- (void)authorizationChangedForBundleIdentifier:(id)a0;

@end
