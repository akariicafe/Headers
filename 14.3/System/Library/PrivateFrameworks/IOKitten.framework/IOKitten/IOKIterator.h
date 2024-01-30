@interface IOKIterator : IOKObject {
    id /* block */ _enumerationBlock;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)initWithIterator:(unsigned int)a0 enumerationBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithIterator:(unsigned int)a0;
- (void)reset;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)initWithIOObject:(unsigned int)a0;
- (id)nextObject;
- (void)enumerate;

@end
