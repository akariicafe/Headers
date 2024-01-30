@class NSURL;

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage {
    NSURL *_URL;
}

- (void).cxx_destruct;
- (BOOL)readOnly;
- (id)initWithURL:(id)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (BOOL)writeToBundleWriter:(id)a0 preferredFilename:(id)a1 filename:(id *)a2 didCopyDataToBundle:(BOOL *)a3;

@end
