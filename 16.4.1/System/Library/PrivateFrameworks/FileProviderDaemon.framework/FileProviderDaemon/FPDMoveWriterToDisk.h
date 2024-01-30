@class FPDMoveWriter, NSFileManager;
@protocol FPActionLocatorAccess;

@interface FPDMoveWriterToDisk : NSObject <FPDMoveWriterExecutor> {
    FPDMoveWriter *_writer;
    NSFileManager *_fileManager;
    id<FPActionLocatorAccess> _stopAccessingToken;
}

- (void)dealloc;
- (id)initWithWriter:(id)a0;
- (void).cxx_destruct;
- (void)_performCopyOfItem:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 bounceNumber:(id)a5 completion:(id /* block */)a6;
- (void)_performMoveOfItem:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 bounceNumber:(id)a5 completion:(id /* block */)a6;
- (void)_resolveLocator:(id)a0 completion:(id /* block */)a1;
- (void)_respectLastUsageDatePolicyForDestinationURL:(id)a0 withSource:(id)a1;
- (void)performCopyOfItem:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)performCreateFolder:(id)a0 inside:(id)a1 as:(id)a2 completion:(id /* block */)a3;
- (void)performMoveOfFolder:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 atomically:(BOOL)a5 completion:(id /* block */)a6;
- (void)performMoveOfItem:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 completion:(id /* block */)a5;

@end
