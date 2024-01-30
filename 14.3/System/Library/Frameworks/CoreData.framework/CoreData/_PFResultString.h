@interface _PFResultString : _PFAbstractString {
    id _parentObject;
}

+ (unsigned long long)bufferOffset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)copy;
- (id)retain;

@end
