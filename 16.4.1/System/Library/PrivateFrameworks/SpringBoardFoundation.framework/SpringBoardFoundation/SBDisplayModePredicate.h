@interface SBDisplayModePredicate : NSObject <NSCopying>

+ (id)allDisplays;
+ (id)forDisplay:(id)a0;
+ (id)forDisplaysSimilarToDisplay:(id)a0 useNativeSize:(BOOL)a1;
+ (id)fromDefaultsKey:(id)a0;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)matchesDisplay:(id)a0;
- (id)defaultsKeyRepresentation;

@end
