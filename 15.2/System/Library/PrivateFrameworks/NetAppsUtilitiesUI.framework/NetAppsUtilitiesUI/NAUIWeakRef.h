@interface NAUIWeakRef : NSObject {
    id _weakStorage;
    id _weakPointer;
    BOOL _useWeakStorage;
}

+ (id)weakRefWithObject:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)object;

@end
