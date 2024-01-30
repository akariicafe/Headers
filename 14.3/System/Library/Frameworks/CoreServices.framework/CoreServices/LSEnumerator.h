@class NSPredicate;

@interface LSEnumerator : NSEnumerator {
    id /* block */ _filter;
    struct atomic_flag { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _hasFiredErrorHandler;
}

@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) id /* block */ filter;

+ (void)initialize;
+ (id)enumeratorForApplicationProxiesWithOptions:(unsigned long long)a0;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)a0 options:(unsigned long long)a1 filter:(id /* block */)a2;
+ (id)new;
+ (id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)a0 options:(unsigned long long)a1;

- (id)_initWithContext:(struct LSContext { id x0; } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_fireErrorHandlerWithError:(id)a0;
- (id)nextObject;

@end
