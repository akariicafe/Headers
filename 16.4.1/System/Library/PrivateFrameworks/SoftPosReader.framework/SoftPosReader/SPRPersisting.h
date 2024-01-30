@interface SPRPersisting : SPRObject

- (BOOL)deleteAll:(id *)a0;
- (BOOL)deleteWithKey:(id)a0 error:(id *)a1;
- (BOOL)insertWithKey:(id)a0 value:(id)a1 error:(id *)a2;
- (id)retrieveAll:(id *)a0;
- (id)retrieveWithKey:(id)a0 error:(id *)a1;
- (BOOL)updateWithKey:(id)a0 value:(id)a1 error:(id *)a2;

@end
