@class TSUTemporaryDirectory;

@interface TSPTemporaryDataStorageURL : NSURL

@property (readonly, nonatomic) TSUTemporaryDirectory *parentDirectory;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFileURLWithPath:(id)a0 parentDirectory:(id)a1;

@end
