@class HMDAccessoryBrowser;

@interface __HMDPairedAccessoryBrowseAssertion : HMFAssertion

@property (readonly, weak) HMDAccessoryBrowser *accessoryBrowser;

- (id)initWithName:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithAccessoryBrowser:(id)a0 reason:(id)a1;

@end
