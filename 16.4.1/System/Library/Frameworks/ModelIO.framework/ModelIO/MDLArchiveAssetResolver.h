@class NSString, NSMutableDictionary, NSData, NSURL;

@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver> {
    NSURL *_archiveURL;
    NSMutableDictionary *_archiveDictionary;
    NSString *_rootUSDPath;
}

@property (retain, nonatomic) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)addResolvedAssetNamed:(id)a0 offset:(unsigned long long)a1 fileSize:(unsigned long long)a2;
- (id)assetNamesInArchive;
- (BOOL)canResolveAssetNamed:(id)a0;
- (void)removeAssetNamed:(id)a0;
- (id)resolveAssetNamed:(id)a0;
- (id)resolveInsideArchiveWithAssetNamed:(id)a0;

@end
