@class FPDMoveWriter;

@interface FPDMoveWriterToProvider : NSObject <FPDMoveWriterExecutor> {
    FPDMoveWriter *_writer;
}

- (void).cxx_destruct;
- (id)_remoteProxy;
- (id)initWithWriter:(id)a0;
- (void)performMoveOfItem:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)performCreateFolder:(id)a0 inside:(id)a1 as:(id)a2 completion:(id /* block */)a3;
- (void)performCopyOfItem:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)performMoveOfFolder:(id)a0 to:(id)a1 as:(id)a2 sourceMaterializeOption:(unsigned long long)a3 targetMaterializeOption:(unsigned long long)a4 atomically:(BOOL)a5 completion:(id /* block */)a6;
- (void)_postImportStepForItem:(id)a0 sourceURL:(id)a1 targetURL:(id)a2 tempFolder:(id)a3 wasCopyRequested:(BOOL)a4 error:(id)a5 completion:(id /* block */)a6;
- (void)_createTargetItemWithProxy:(id)a0 target:(id)a1 contents:(id)a2 targetName:(id)a3 lastUsedDate:(id)a4 completionHandler:(id /* block */)a5;
- (void)_importURL:(id)a0 source:(id)a1 target:(id)a2 as:(id)a3 lastUsedDate:(id)a4 initialImportFinished:(id /* block */)a5 progressAvailable:(id /* block */)a6 completion:(id /* block */)a7;
- (void)_resolveItemOrURL:(id)a0 andCoordinateWithHandler:(id /* block */)a1;
- (void)_createFolder:(id)a0 under:(id)a1 completion:(id /* block */)a2;

@end
