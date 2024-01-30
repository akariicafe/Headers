@interface _PASArrayProxy : _PASLazyArrayBase <NSFastEnumeration> {
    id /* block */ _objectAtIndexBlock;
    id /* block */ _countBlock;
}

- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)count;
- (id)_pas_unproxy;
- (id)objectAtIndex:(unsigned long long)a0;

@end
