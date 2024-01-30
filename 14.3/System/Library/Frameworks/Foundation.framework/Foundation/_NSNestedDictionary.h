@interface _NSNestedDictionary : NSMutableDictionary {
    id _locals;
    id _bindings;
}

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectEnumerator;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;

@end
