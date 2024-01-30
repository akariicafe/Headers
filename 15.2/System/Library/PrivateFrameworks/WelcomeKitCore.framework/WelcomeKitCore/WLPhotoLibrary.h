@class NSString;

@interface WLPhotoLibrary : NSObject

@property (nonatomic) unsigned long long contentType;
@property (copy, nonatomic) NSString *rootPath;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContentType:(unsigned long long)a0;
- (void)addAsset:(id)a0 filename:(id)a1 size:(unsigned long long)a2 collection:(id)a3 completion:(id /* block */)a4;
- (void)addAsset:(id)a0 collection:(id)a1;
- (BOOL)photoLibraryDidComplete:(id)a0 filename:(id)a1 success:(BOOL)a2 error:(id *)a3;
- (id)assetCollectionChangeRequest:(id)a0;
- (BOOL)copy:(id)a0 filename:(id)a1 error:(id *)a2;

@end
