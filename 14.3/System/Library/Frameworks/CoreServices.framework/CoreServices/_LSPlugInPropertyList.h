@class NSDictionary, _LSLazyPropertyList;

@interface _LSPlugInPropertyList : _LSLazyPropertyList {
    _LSLazyPropertyList *_infoPlist;
    _LSLazyPropertyList *_sdkPlist;
    NSDictionary *_mergedPlist;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mergeLock;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInfoPlist:(id)a0 SDKPlist:(id)a1;
- (BOOL)_getPropertyList:(id *)a0;
- (BOOL)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
