@class NSArray, _MXExtensionMatchingMerger, _MXExtensionDispatchCenter, _MXExtensionServiceCenter, _MXAssetStorage;

@interface _MXExtensionProvider : NSObject {
    Class _extensionMatchingClass;
    id _matchingContext;
    id _intentNonUIMatchingContext;
    id _intentUIMatchingContext;
    NSArray *_blacklistedExtensions;
    NSArray *_blacklistedContainingApplications;
}

@property (retain, nonatomic) _MXExtensionMatchingMerger *merger;
@property (retain, nonatomic) _MXExtensionDispatchCenter *dispatchCenter;
@property (retain, nonatomic) _MXExtensionServiceCenter *serviceCenter;
@property (retain, nonatomic) _MXAssetStorage *assetStorage;

+ (id)sharedProvider;

- (id)_currentExtensions;
- (void)_beginMatchingExtensionsIfNeeded;
- (void)_endMatchingExtensionsIfNeeded;
- (void)removeExtensionUpdateHandler:(id)a0;
- (id)_extensionsByFilteringBlacklistedExtensionsFromArray:(id)a0;
- (id)addExtensionsUpdateHandler:(id /* block */)a0;
- (BOOL)_enableExtension:(id)a0 error:(id *)a1;
- (void)imageForKey:(id)a0 extension:(id)a1 completion:(id /* block */)a2;
- (void)_restartMatchingExtensionsForDefaultsChange;
- (void)imageForKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)_disableExtension:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)loadImageForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)_extensionWithIdentifier:(id)a0;
- (id)init;
- (id)siblingExtensionsWithContainingAppIdentifer:(id)a0;
- (void).cxx_destruct;
- (id)_intentClassFilter:(id)a0;

@end
