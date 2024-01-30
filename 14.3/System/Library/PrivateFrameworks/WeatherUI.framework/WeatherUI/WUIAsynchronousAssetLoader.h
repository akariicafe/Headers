@class NSString, NSTimer, NSObject, NSCache;
@protocol OS_dispatch_queue, WAAssetLoaderDelegate;

@interface WUIAsynchronousAssetLoader : NSObject <CAMLParserDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_caml_parsing_queue;
}

@property (retain, nonatomic) NSCache *resourceCache;
@property (retain, nonatomic) NSCache *dataCache;
@property (retain, nonatomic) NSCache *caDataCache;
@property (retain, nonatomic) NSTimer *opportunityTimer;
@property (weak, nonatomic) id<WAAssetLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAssetLoader;

- (id)init;
- (id)filenameForCondition:(long long)a0 isDay:(BOOL)a1;
- (void)CAMLParser:(id)a0 didLoadResource:(id)a1 fromURL:(id)a2;
- (void).cxx_destruct;
- (void)_primeOpportunisticLoad;
- (void)dealloc;
- (void)beginLoading;
- (void)CAMLParser:(id)a0 formatErrorString:(const char *)a1 arguments:(char *)a2 lineNumber:(unsigned long long)a3;
- (void)cancelLoading;
- (void)CAMLParser:(id)a0 formatWarningString:(const char *)a1 arguments:(char *)a2 lineNumber:(unsigned long long)a3;
- (id)CAMLParser:(id)a0 resourceForURL:(id)a1;
- (void)_asynchronouslyPreheatCADataForCity:(id)a0;
- (id)queue;
- (void)setResource:(id)a0 forKey:(id)a1;
- (void)loadRootLayerForFile:(id)a0 completion:(id /* block */)a1;
- (Class)CAMLParser:(id)a0 didFailToFindClassWithName:(id)a1;
- (void)didReceivedMemoryWarning;
- (void)_opportunisticallyLoad;
- (id)caml_parsing_queue;

@end
