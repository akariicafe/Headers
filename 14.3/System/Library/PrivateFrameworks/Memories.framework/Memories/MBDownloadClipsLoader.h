@class NSRecursiveLock, NSSet, NSMutableDictionary, NSString;

@interface MBDownloadClipsLoader : MBClipsLoader <PHAssetRepresentationDownloadObserver>

@property (retain, nonatomic) NSSet *assetURLs;
@property (retain, nonatomic) NSSet *insertedAssetURLs;
@property (retain) NSMutableDictionary *identifierURLsToClipsMap;
@property (retain, nonatomic) NSRecursiveLock *updateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)load;
- (id)init;
- (void).cxx_destruct;
- (void)downloadStateOfAssetRepresentationDidChange:(id)a0 previousState:(unsigned long long)a1 currentState:(unsigned long long)a2;
- (id)fetchAssetURLs;
- (void)loadClipsFromURLs:(id)a0;

@end
