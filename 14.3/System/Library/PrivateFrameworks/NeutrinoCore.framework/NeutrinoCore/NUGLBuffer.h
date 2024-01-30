@class NSMutableIndexSet;

@interface NUGLBuffer : NUGLObject {
    NSMutableIndexSet *_validRegion;
}

@property (readonly, nonatomic) long long size;
@property (nonatomic) unsigned int target;
@property (nonatomic) unsigned int usage;

- (void)delete;
- (id)initWithSize:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateData;
- (id)description;
- (void)generate:(id)a0;
- (void)readDataWithContext:(id)a0 block:(id /* block */)a1;
- (void)readDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 context:(id)a1 block:(id /* block */)a2;
- (void)writeDataWithContext:(id)a0 block:(id /* block */)a1;
- (void)writeDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 context:(id)a1 block:(id /* block */)a2;
- (void)_writeDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned int)a1 context:(id)a2 block:(id /* block */)a3;
- (void)copyTexture:(id)a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 context:(id)a2;
- (void)updateTexture:(id)a0 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 context:(id)a2;
- (BOOL)hasValidData;
- (BOOL)hasValidDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)hasNoValidData;
- (BOOL)hasNoValidDataOutsideOfRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invalidateDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)validateDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
