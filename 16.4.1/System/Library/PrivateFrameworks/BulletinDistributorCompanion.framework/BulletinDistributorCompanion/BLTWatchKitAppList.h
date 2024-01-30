@class NSString, NSDictionary, NSMutableArray;
@protocol BLTWatchKitAppListDelegate;

@interface BLTWatchKitAppList : NSObject <BLTDebugObserverWatchKitAppList> {
    NSDictionary *_appsByAppBundleID;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_loadingCompletionHandlers;
    BOOL _loading;
}

@property (getter=isLoaded) BOOL loaded;
@property (weak, nonatomic) id<BLTWatchKitAppListDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchWatchKitInfo;
- (void)_fetchWatchKitInfoWithForce:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchWatchKitInfoWithCompletion:(id /* block */)a0;
- (id)watchKitAppDefinitionWithBundleID:(id)a0;

@end
