@interface OITSURetainedPointerSet : OITSUPointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)allObjects;

@end
