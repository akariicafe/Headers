@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (oneway void)release;
- (void)superRelease;
- (id)retain;
- (id)initWithOwner:(id)a0;
- (unsigned long long)count;

@end
