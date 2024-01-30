@interface TSUMutableRetainedPointerSet : TSUMutablePointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)allObjects;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;

@end
