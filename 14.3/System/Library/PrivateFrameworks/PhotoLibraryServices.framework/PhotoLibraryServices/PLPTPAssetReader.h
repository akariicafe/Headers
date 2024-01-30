@class NSString;

@interface PLPTPAssetReader : NSObject {
    BOOL _shouldDeleteTemporaryFileOnDeallocation;
}

@property (readonly, copy, nonatomic) NSString *path;
@property (retain, nonatomic) id userInfo;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithTemporaryFileDeletedOnDeallocPath:(id)a0;
- (id)dataSourcePathForDataRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;

@end
