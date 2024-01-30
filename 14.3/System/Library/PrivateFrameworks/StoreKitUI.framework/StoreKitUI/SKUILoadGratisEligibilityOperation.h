@class NSArray, SKUIClientContext, NSObject;
@protocol OS_dispatch_queue;

@interface SKUILoadGratisEligibilityOperation : NSOperation {
    NSArray *_bundleIDs;
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)_bodyData;
- (id)initWithBundleIdentifiers:(id)a0 clientContext:(id)a1;

@end
