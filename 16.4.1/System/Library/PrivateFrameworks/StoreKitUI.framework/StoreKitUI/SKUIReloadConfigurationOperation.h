@class NSString, SSURLBag, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIReloadConfigurationOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _outputBlock;
    SSURLBag *_urlBag;
}

@property (class, readonly) NSString *cachePath;

@property (retain) SSURLBag *URLBag;
@property (copy) id /* block */ outputBlock;

- (void)main;
- (id)init;
- (void).cxx_destruct;

@end
