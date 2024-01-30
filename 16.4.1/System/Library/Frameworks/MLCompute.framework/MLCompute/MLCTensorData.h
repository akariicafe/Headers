@class NSData;

@interface MLCTensorData : NSObject

@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) void *bytes;
@property (readonly, nonatomic) unsigned long long length;

+ (id)dataWithBytes:(void *)a0 length:(unsigned long long)a1;
+ (id)dataWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
+ (id)dataWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
+ (id)dataWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
+ (id)dataWithImmutableBytesNoCopy:(const void *)a0 length:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithData:(void *)a0 length:(unsigned long long)a1;
- (id)initWithDataNoCopy:(void *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)initWithDataNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;

@end
