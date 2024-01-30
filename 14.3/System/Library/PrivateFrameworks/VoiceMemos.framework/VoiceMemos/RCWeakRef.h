@interface RCWeakRef : NSObject {
    id _weakStorage;
    id _weakPointer;
    BOOL _useWeakStorage;
}

+ (id)weakRefWithObject:(id)a0;

- (void)dealloc;
- (id)object;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
