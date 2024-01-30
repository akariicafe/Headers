@class NSString;

@interface IOKObject : NSObject

@property (readonly, copy, nonatomic) NSString *ioClassName;
@property (readonly, nonatomic) unsigned int object;

+ (Class)classForRegistryEntry:(unsigned int)a0;
+ (id)ioSuperClassNameForClassName:(id)a0;
+ (id)bundleIdentifierForClassName:(id)a0;

- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithIOObject:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToIOClassName:(id)a0;

@end
