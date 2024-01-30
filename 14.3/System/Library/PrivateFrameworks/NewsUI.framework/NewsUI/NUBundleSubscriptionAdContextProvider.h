@class NSArray, NSString;

@interface NUBundleSubscriptionAdContextProvider : NSObject <NUAdContextProvider>

@property (readonly, nonatomic, getter=isBundleSubscriber) BOOL bundleSubscriber;
@property (copy, nonatomic) NSArray *bundleIAPs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)a0;
- (id)initWithBundleSubscriber:(BOOL)a0 bundleIAPs:(id)a1;

@end
