@class NSString;

@interface PETReservoirSamplingLogStoreFile : NSObject <PETReservoirSamplingLogStore> {
    NSString *_path;
    void *_ptr;
    unsigned long long _mapLen;
    int _fd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (void)unlock;
- (BOOL)lock;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct chunk_s { unsigned int x0; unsigned int x1; } x4[0]; } *)remap:(unsigned long long *)a0;
- (void)_unmap;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)currentLength;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct chunk_s { unsigned int x0; unsigned int x1; } x4[0]; } *)headerMap:(unsigned long long *)a0;
- (BOOL)changeLength:(unsigned long long)a0;
- (BOOL)appendData:(id)a0 andReturnMapPointer:(struct **)a1;
- (BOOL)attemptToRecreate;

@end
