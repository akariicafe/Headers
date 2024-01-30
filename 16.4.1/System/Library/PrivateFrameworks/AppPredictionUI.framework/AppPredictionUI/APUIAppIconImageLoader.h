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

- (BOOL)loadImage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_blankIconImage;
- (void)_getImageForArtwork:(id)a0 completionHandler:(id /* block */)a1;
- (void)_loadImageWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerImageLoader;

@end
