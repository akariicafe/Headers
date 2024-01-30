@interface __NSSingleObjectEnumerator : NSEnumerator {
    id _theCollection;
    id _theObjectToReturn;
}

- (id)nextObject;
- (id)initWithObject:(id)a0 collection:(id)a1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
