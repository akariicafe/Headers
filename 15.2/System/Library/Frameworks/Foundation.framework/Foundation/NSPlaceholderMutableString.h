@interface NSPlaceholderMutableString : NSMutableString

- (id)initWithString:(id)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)retainCount;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 freeWhenDone:(BOOL)a3;
- (id)retain;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)initWithFormat:(id)a0 locale:(id)a1 arguments:(char *)a2;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 deallocator:(id /* block */)a3;
- (void)dealloc;
- (id)initWithCStringNoCopy:(char *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithCString:(const char *)a0 encoding:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)initWithUTF8String:(const char *)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;

@end
