@class _PASLock;

@interface _PASInternPool : _PASZonedObject {
    _PASLock *_lock;
    id /* block */ _copyWithZone;
}

- (void)clear;
- (BOOL)isInterned:(id)a0;
- (id)intern:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)internNoCopy:(id)a0;
- (id)initWithBehavior:(unsigned long long)a0 copyWithZone:(id /* block */)a1;

@end
