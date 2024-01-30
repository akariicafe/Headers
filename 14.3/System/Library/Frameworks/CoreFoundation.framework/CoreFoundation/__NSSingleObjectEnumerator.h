@interface __NSSingleObjectEnumerator : NSEnumerator {
    id _theCollection;
    id _theObjectToReturn;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)nextObject;
- (id)initWithObject:(id)a0 collection:(id)a1;

@end
