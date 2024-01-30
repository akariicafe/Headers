@interface _NSKeyedCoderOldStyleArray : NSObject {
    void *_addr;
    unsigned long long _count;
    unsigned long long _size;
    char _type;
    BOOL _decoded;
    char _padding[2];
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithObjCType:(char)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (void)fillObjCType:(char)a0 count:(unsigned long long)a1 at:(void *)a2;
- (void)encodeWithCoder:(id)a0;

@end
