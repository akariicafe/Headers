@interface AVEventManagerBlockAction : AVEventManagerAction {
    id /* block */ _block;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)sendAction:(id)a0;
- (id)initWithBlock:(id /* block */)a0 event:(id)a1;

@end
