@interface SPRStackable : SPRObject

- (BOOL)isEmpty;
- (long long)count;
- (long long)searchWithValue:(id)a0;
- (BOOL)clear:(id *)a0;
- (id)peek:(id *)a0;
- (id)peekAll:(id *)a0;
- (id)pop:(id *)a0;
- (BOOL)pushWithValue:(id)a0 error:(id *)a1;

@end
