@class NSArray, NSDictionary, NSMutableDictionary;

@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_entries;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allKeys;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)multiDictionary;
+ (id)multiDictionaryWithObject:(id)a0 forKey:(id)a1;

- (BOOL)containsKey:(id)a0;
- (void)eachObject:(id /* block */)a0;
- (id)initWithEntries:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)objectsForKeys:(id)a0;
- (id)objectsForKey:(id)a0;

@end
