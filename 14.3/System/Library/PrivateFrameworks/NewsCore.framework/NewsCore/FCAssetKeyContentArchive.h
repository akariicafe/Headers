@class NSData;

@interface FCAssetKeyContentArchive : FCContentArchive {
    NSData *_wrappingKey;
    NSData *_wrappingKeyID;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)manifest;
- (id)initWithWrappingKey:(id)a0 wrappingKeyID:(id)a1;
- (id)unarchiveIntoContentContext:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
