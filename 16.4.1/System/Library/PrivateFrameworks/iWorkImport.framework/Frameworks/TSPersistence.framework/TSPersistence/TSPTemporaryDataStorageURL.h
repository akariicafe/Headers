@class TSUTemporaryDirectory;

@interface TSPTemporaryDataStorageURL : NSURL

@property (readonly, nonatomic) TSUTemporaryDirectory *parentDirectory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initFileURLWithPath:(id)a0 parentDirectory:(id)a1;

@end
