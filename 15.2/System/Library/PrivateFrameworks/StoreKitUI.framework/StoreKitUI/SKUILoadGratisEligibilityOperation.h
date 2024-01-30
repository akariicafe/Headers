@class NSArray, SKUIClientContext, NSObject;
@protocol OS_dispatch_queue;

@interface SKUILoadGratisEligibilityOperation : NSOperation {
    NSArray *_bundleIDs;
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (id)_bodyData;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBundleIdentifiers:(id)a0 clientContext:(id)a1;

@end
