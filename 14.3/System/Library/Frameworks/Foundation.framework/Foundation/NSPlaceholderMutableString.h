@interface NSPlaceholderMutableString : NSMutableString

- (unsigned long long)length;
- (id)initWithCStringNoCopy:(char *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)init;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 freeWhenDone:(BOOL)a3;
- (id)autorelease;
- (oneway void)release;
- (id)initWithUTF8String:(const char *)a0;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (BOOL)_tryRetain;
- (id)initWithString:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (unsigned long long)retainCount;
- (id)initWithCString:(const char *)a0 encoding:(unsigned long long)a1;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)retain;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 deallocator:(id /* block */)a3;
- (id)initWithFormat:(id)a0 locale:(id)a1 arguments:(char *)a2;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithCapacity:(unsigned long long)a0;

@end
