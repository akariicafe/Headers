@interface _NSKeyValueObjectBox : NSObject <NSCopying> {
    id _object;
    unsigned long long _objectPointer;
    Class _objectClass;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
