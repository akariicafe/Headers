@class NSMutableDictionary, ML3DatabaseConnection;

@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary {
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithConnection:(id)a0;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;

@end
