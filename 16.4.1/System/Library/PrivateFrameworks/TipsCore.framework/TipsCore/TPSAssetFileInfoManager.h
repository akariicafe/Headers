@class NSDictionary;

@interface TPSAssetFileInfoManager : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *fileMap;

+ (id)na_identity;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)fileInfoWithMainIdentifier:(id)a0 userInterfaceStyle:(long long)a1 scale:(long long)a2;
- (id)fileInfoIdentifierWithMainIdentifier:(id)a0 userInterfaceStyle:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)addNewAssetInfoFromFileMap:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)filesFromDictionary:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 clientConditions:(id)a1;

@end
