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

- (void)unlock;
- (id)initWithPath:(id)a0;
- (BOOL)lock;
- (unsigned long long)currentLength;
- (BOOL)attemptToRecreate;
- (BOOL)appendData:(id)a0 andReturnMapPointer:(struct **)a1;
- (BOOL)changeLength:(unsigned long long)a0;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct chunk_s { unsigned int x0; unsigned int x1; } x4[0]; } *)headerMap:(unsigned long long *)a0;
- (void)_unmap;
- (void).cxx_destruct;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct chunk_s { unsigned int x0; unsigned int x1; } x4[0]; } *)remap:(unsigned long long *)a0;
- (void)dealloc;

@end
