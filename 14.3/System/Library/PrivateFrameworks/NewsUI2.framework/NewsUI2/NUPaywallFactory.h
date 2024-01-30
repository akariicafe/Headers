@interface NUPaywallFactory : NSObject {
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ analyticsChannelDataFactory;
    void /* unknown type, empty encoding */ resolver;
}

- (id)paywallForChannel:(id)a0 eventData:(id)a1;
- (id)paywallForHeadline:(id)a0 articleAccess:(long long)a1 eventData:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
