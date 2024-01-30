@class NSString;
@protocol RBEntitlementManaging;

@interface RBJetsamBandProvider : NSObject <RBJetsamBandProviding> {
    id<RBEntitlementManaging> _entitlementManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)defaultPriorityForProcess:(id)a0 inBand:(unsigned char)a1;
- (int)jetsamPriorityForProcess:(id)a0 withState:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEntitlementManager:(id)a0;

@end
