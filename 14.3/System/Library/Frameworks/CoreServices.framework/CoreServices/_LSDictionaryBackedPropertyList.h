@class NSDictionary;

@interface _LSDictionaryBackedPropertyList : _LSLazyPropertyList {
    NSDictionary *_plist;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithPropertyList:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_getPropertyList:(id *)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
