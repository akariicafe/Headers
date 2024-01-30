@interface _PFResultString : _PFAbstractString {
    id _parentObject;
}

+ (unsigned long long)bufferOffset;

- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
