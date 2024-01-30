@interface NSOwnedDictionaryProxy : NSDictionary {
    id _owner;
}

- (id)retain;
- (oneway void)release;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)initWithOwner:(id)a0;
- (void)superRelease;

@end
