@class NSMutableSet, NSMutableDictionary;

@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableSet *_underlyingSet;
    NSMutableDictionary *_changesDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;

+ (id)set;
+ (id)setWithSet:(id)a0;
+ (id)setWithArray:(id)a0;

- (id)objectEnumerator;
- (id)initWithSet:(id)a0;
- (id)_initWithEnumerable:(id)a0 count:(unsigned long long)a1;
- (id)init;
- (unsigned long long)hash;
- (id)member:(id)a0;
- (id)anyObject;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)allModifications;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)allObjects;
- (id)description;
- (void)enumerateModificationsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToTrackedSet:(id)a0;
- (id)_initWithUnderlyingSet:(id)a0 changesDictionary:(id)a1;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateModificationsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
