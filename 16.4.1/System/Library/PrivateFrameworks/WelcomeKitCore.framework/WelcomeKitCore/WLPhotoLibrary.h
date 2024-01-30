@class NSString;

@interface WLPhotoLibrary : NSObject

@property (nonatomic) unsigned long long errorCount;
@property (nonatomic) unsigned long long contentType;
@property (copy, nonatomic) NSString *rootPath;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentType:(unsigned long long)a0;
- (id)assetCollectionChangeRequest:(id)a0;
- (BOOL)copy:(id)a0 filename:(id)a1 error:(id *)a2;
- (BOOL)photoLibraryDidComplete:(id)a0 filename:(id)a1 success:(BOOL)a2 error:(id *)a3;
- (void)addAsset:(id)a0 collection:(id)a1;
- (void)addAsset:(id)a0 filename:(id)a1 size:(unsigned long long)a2 collection:(id)a3 completion:(id /* block */)a4;

@end
