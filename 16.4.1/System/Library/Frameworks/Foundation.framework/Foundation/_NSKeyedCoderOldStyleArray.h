@interface _NSKeyedCoderOldStyleArray : NSObject <NSSecureCoding> {
    void *_addr;
    unsigned long long _count;
    unsigned long long _size;
    char _type;
    BOOL _decoded;
    char _padding[2];
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)fillObjCType:(char)a0 count:(unsigned long long)a1 at:(void *)a2;
- (id)initWithObjCType:(char)a0 count:(unsigned long long)a1 at:(const void *)a2;

@end
