@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CNOrderedDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_dictionary;
    NSMutableArray *_orderedKeys;
}

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allObjects;

+ (id)dictionaryWithObject:(id)a0 forKey:(id)a1;
+ (id)orderedDictionary;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
