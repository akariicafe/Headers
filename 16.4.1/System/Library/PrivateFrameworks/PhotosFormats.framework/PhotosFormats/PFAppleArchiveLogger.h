@interface PFAppleArchiveLogger : PFAppleArchiveStream

+ (BOOL)encodeFile:(id)a0 destination:(id)a1 error:(id *)a2;

- (BOOL)flush:(id *)a0;
- (BOOL)encodeBuffer:(const void *)a0 size:(unsigned long long)a1 error:(id *)a2;
- (id)initWithArchiveURL:(id)a0;

@end
