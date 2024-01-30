@class NSDictionary;

@interface MSVBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary *_keyToObjectDictionary;
    NSDictionary *_objectToKeyDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)bidirectionalDictionary;

- (id)objectForKey:(id)a0;
- (id)init;
- (id)keyForObject:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)allKeys;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
