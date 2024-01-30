@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface APUIAppIconImageLoader : NSObject <SFResourceLoader> {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_completionHandlers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)loadImage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_loadImageWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getImageForArtwork:(id)a0 completionHandler:(id /* block */)a1;
- (id)_blankIconImage;
- (void)registerImageLoader;

@end
