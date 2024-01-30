@interface OITSUMutableRetainedPointerSet : OITSUMutablePointerSet

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)init;
- (id)allObjects;
- (id)initWithCapacity:(unsigned long long)a0;

@end
