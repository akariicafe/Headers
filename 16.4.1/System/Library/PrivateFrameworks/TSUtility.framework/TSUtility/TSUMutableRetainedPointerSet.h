@interface TSUMutableRetainedPointerSet : TSUMutablePointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)initWithCapacity:(unsigned long long)a0;
- (id)allObjects;
- (id)init;

@end
