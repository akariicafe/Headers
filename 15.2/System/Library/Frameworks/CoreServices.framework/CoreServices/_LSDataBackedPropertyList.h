@class NSData, _LSPlistHint;

@interface _LSDataBackedPropertyList : _LSLazyPropertyList {
    NSData *_plistData;
    _LSPlistHint *_plistHint;
}

+ (BOOL)supportsSecureCoding;

- (void)prewarm;
- (id)initWithPropertyListData:(id)a0;
- (void)detach;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (id)uncheckedObjectsForKeys:(id)a0;
- (id)_plistHint;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_getPropertyList:(id *)a0;

@end
