@interface IOKIterator : IOKObject {
    id /* block */ _enumerationBlock;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)nextObject;
- (id)initWithIOObject:(unsigned int)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)initWithIterator:(unsigned int)a0 enumerationBlock:(id /* block */)a1;
- (void)enumerate;
- (id)initWithIterator:(unsigned int)a0;
- (void).cxx_destruct;
- (void)reset;

@end
