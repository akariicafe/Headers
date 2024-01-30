@interface __CFNotification : NSNotification <NSCopying> {
    id _name;
    id _object;
    id _userInfo;
    BOOL _fouSemantics;
}

- (id)initWithName:(struct __CFString { } *)a0 object:(const void *)a1 userInfo:(struct __CFDictionary { } *)a2 foundation:(BOOL)a3;
- (id)userInfo;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (unsigned long long)hash;
- (void)dealloc;
- (id)object;

@end
