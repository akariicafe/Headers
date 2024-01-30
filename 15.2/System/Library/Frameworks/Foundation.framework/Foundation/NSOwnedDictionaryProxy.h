@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (void)superRelease;
- (id)retain;
- (id)keyEnumerator;
- (id)initWithOwner:(id)a0;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (oneway void)release;

@end
