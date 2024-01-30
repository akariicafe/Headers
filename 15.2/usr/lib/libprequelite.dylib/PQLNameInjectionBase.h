@class NSData;

@interface PQLNameInjectionBase : NSData {
    unsigned long long _length;
    char *_bytes;
}

@property (readonly, nonatomic) NSData *sql;

- (unsigned long long)length;
- (id)initWithData:(id)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (void)dealloc;

@end
