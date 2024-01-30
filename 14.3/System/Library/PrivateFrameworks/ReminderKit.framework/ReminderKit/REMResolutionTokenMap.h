@class NSMutableDictionary;

@interface REMResolutionTokenMap : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *map;

+ (id)resolutionTokenMapWithJSONData:(id)a0 keyMap:(id)a1;
+ (id)mapWithData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMap:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)archivedData;
- (id)debugDescription;
- (long long)compare:(id)a0 forKey:(id)a1;
- (long long)compareAndMergeWithMap:(id)a0 forKey:(id)a1;
- (BOOL)mergeWithMap:(id)a0 forKey:(id)a1;
- (void)initTokenWithDefaultValueIfNecessaryForKey:(id)a0;
- (id)getTokenForKey:(id)a0;
- (void)setToken:(id)a0 forKey:(id)a1;
- (id)getTokenKeys;
- (void)encodeWithCoder:(id)a0;

@end
