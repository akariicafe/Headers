@class NSSet, NSBundle, NSProgress, NSString;

@interface NSBundleResourceRequest : NSObject <NSProgressReporting> {
    NSSet *_tags;
    double _priority;
    NSBundle *_bundle;
    NSProgress *_progress;
    long long _fetchState;
}

@property double loadingPriority;
@property (readonly, copy) NSSet *tags;
@property (readonly) NSBundle *bundle;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setConnection:(id)a0;
+ (id)_extensionEndpointForMainBundleOfHostApplication:(id)a0;
+ (id)_assetPackBundleForBundle:(id)a0 withAssetPackID:(id)a1;
+ (id)_manifestWithBundle:(id)a0 error:(id *)a1;
+ (void)_addExtensionEndpoint:(id)a0;
+ (void)_flushCacheForBundle:(id)a0;
+ (id)_connection;
+ (id)_extensionEndpoint;

- (void)conditionallyBeginAccessingResourcesWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)beginAccessingResourcesWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithTag:(id)a0;
- (id)initWithTags:(id)a0;
- (id)initWithTags:(id)a0 bundle:(id)a1;
- (void)endAccessingResources;

@end
