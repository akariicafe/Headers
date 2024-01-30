@class NSString, NSMutableData;

@interface PETReservoirSamplingLogStoreInMemory : NSObject <PETReservoirSamplingLogStore> {
    NSMutableData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct chunk_s { unsigned int x0; unsigned int x1; } x4[0]; } *)remap:(unsigned long long *)a0;
- (BOOL)lock;
- (void)unlock;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct chunk_s { unsigned int x0; unsigned int x1; } x4[0]; } *)headerMap:(unsigned long long *)a0;
- (BOOL)attemptToRecreate;
- (BOOL)changeLength:(unsigned long long)a0;
- (unsigned long long)currentLength;
- (BOOL)appendData:(id)a0 andReturnMapPointer:(struct **)a1;
- (id)init;
- (void).cxx_destruct;

@end
