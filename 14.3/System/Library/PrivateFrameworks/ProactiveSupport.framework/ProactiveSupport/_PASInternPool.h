@class _PASLock;

@interface _PASInternPool : _PASZonedObject {
    _PASLock *_lock;
    id /* block */ _copyWithZone;
}

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)internNoCopy:(id)a0;
- (BOOL)isInterned:(id)a0;
- (id)intern:(id)a0;
- (id)_intern:(id)a0 copyInput:(BOOL)a1;
- (id)initWithBehavior:(unsigned long long)a0 copyWithZone:(id /* block */)a1;

@end
