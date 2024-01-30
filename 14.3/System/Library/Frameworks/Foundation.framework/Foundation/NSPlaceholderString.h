@interface NSPlaceholderString : NSString

- (unsigned long long)length;
- (id)initWithCStringNoCopy:(char *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)init;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 freeWhenDone:(BOOL)a3;
- (id)autorelease;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (id)initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 arguments:(char *)a3 error:(id *)a4;
- (void)dealloc;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (BOOL)_tryRetain;
- (id)initWithString:(id)a0;
- (id)initWithCString:(const char *)a0 length:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (id)initWithCString:(const char *)a0 encoding:(unsigned long long)a1;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)retain;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 deallocator:(id /* block */)a3;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (id)initWithFormat:(id)a0 locale:(id)a1 arguments:(char *)a2;
- (id)initWithCString:(const char *)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;

@end
