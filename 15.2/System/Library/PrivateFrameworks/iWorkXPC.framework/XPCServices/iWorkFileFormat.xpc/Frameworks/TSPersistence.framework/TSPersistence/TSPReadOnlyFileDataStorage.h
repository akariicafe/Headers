@class NSURL;

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage {
    NSURL *_URL;
}

- (BOOL)readOnly;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)performReadWithAccessor:(id /* block */)a0;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;

@end
