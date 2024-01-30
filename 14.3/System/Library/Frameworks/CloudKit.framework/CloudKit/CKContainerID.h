@class NSString;

@interface CKContainerID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long specialContainerType;
@property (nonatomic) BOOL isTestContainer;
@property (nonatomic) BOOL isAppleInternal;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long environment;

- (id)CKPropertiesDescription;
- (void)_deriveContainerAttributes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ckShortDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)sqliteRepresentation;
- (id)representativeDataclass;
- (id)description;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)initWithContainerIdentifier:(id)a0 environment:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
