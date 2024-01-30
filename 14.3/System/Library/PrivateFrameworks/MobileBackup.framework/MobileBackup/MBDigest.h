@interface MBDigest : NSObject

+ (id)sha1;
+ (id)sha1ForData:(id)a0;
+ (id)sha1ForFileAtPath:(id)a0 error:(id *)a1;
+ (id)sha1HmacForString:(id)a0 key:(id)a1;
+ (long long)simpleChecksumForString:(id)a0;
+ (id)sha1ForString:(id)a0;
+ (id)sha256;

- (id)final;
- (void)finalWithBytes:(void *)a0 length:(unsigned long long)a1;
- (id)digestForData:(id)a0;
- (id)digestForFileAtPath:(id)a0 error:(id *)a1;
- (id)digestForString:(id)a0;
- (BOOL)updateWithFile:(id)a0 error:(id *)a1;
- (void)updateWithInt64:(long long)a0;
- (void)updateWithInt32:(int)a0;
- (void)updateWithDate:(id)a0;
- (void)updateWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)updateWithData:(id)a0;
- (void)updateWithString:(id)a0;

@end
