@class NSArray;

@interface ACDLazyArray : NSArray {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _initializationLock;
    id /* block */ _initializationBlock;
    NSArray *_underlyingArray;
}

- (id)init;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithInitializer:(id /* block */)a0;

@end
