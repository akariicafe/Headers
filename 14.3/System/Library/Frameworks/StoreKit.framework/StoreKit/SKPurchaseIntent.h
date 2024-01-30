@class NSString;

@interface SKPurchaseIntent : NSObject {
    NSString *_bundleId;
    NSString *_productIdentifer;
    NSString *_appName;
    NSString *_productName;
}

- (void).cxx_destruct;
- (void)send:(id /* block */)a0;
- (id)initWithBundleId:(id)a0 productIdentifier:(id)a1 appName:(id)a2 productName:(id)a3;
- (id)initWithBundleId:(id)a0 productIdentifier:(id)a1;

@end
