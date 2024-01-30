@class NSString, MPMediaLibrary;

@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject <MPCModelPlaybackAssetCacheProviding> {
    MPMediaLibrary *_mediaLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)a0;
+ (id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)a0;
+ (id)deviceLibraryProviderWithUserIdentity:(id)a0;

- (void).cxx_destruct;
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getPlaybackAssetCacheDestinationURL:(id *)a0 purchaseBundleDestinationURL:(id *)a1 forGenericObject:(id)a2 assetQualityType:(long long)a3 pathExtension:(id)a4;
- (void)setPlaybackAssetCacheFileAsset:(id)a0 forGenericObject:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_initWithMediaLibrary:(id)a0;
- (long long)_persistentIDForModelObject:(id)a0;

@end
