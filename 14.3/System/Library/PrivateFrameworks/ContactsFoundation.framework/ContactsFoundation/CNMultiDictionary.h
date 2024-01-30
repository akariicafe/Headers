@class NSArray, NSDictionary, NSMutableDictionary;

@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_entries;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allKeys;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)multiDictionaryWithObject:(id)a0 forKey:(id)a1;
+ (id)multiDictionary;

- (id)objectsForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)objectsForKeys:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithEntries:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)eachObject:(id /* block */)a0;
- (BOOL)containsKey:(id)a0;

@end
