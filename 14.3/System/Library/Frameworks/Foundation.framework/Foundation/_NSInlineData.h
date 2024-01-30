@interface _NSInlineData : NSData {
    unsigned short _length;
}

- (const void *)bytes;
- (unsigned long long)length;
- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_createDispatchData;
- (id)initWithCoder:(id)a0;
- (BOOL)_isCompact;

@end
