@interface _NSNestedDictionary : NSMutableDictionary {
    id _locals;
    id _bindings;
}

- (id)objectEnumerator;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;

@end
