@interface _NSInlineData : NSData {
    unsigned short _length;
}

- (BOOL)_isCompact;
- (BOOL)_providesConcreteBacking;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_createDispatchData;

@end
