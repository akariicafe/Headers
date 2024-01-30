@class NSMutableSet, NSMutableDictionary;

@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableSet *_underlyingSet;
    NSMutableDictionary *_changesDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;

+ (id)set;
+ (id)setWithArray:(id)a0;
+ (id)setWithSet:(id)a0;

- (id)init;
- (id)_initWithUnderlyingSet:(id)a0 changesDictionary:(id)a1;
- (void)enumerateModificationsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)enumerateModificationsUsingBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)member:(id)a0;
- (id)anyObject;
- (BOOL)isEqualToTrackedSet:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_initWithEnumerable:(id)a0 count:(unsigned long long)a1;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allModifications;
- (id)objectEnumerator;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithSet:(id)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)allObjects;
- (BOOL)containsObject:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
