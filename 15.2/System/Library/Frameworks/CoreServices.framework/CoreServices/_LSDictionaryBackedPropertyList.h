@class NSDictionary;

@interface _LSDictionaryBackedPropertyList : _LSLazyPropertyList {
    NSDictionary *_plist;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (id)initWithPropertyList:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_getPropertyList:(id *)a0;

@end
