@class NSString, NSArray, TPSAssets;

@interface TPSContent : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL bodyContainsLink;
@property (nonatomic) long long labelStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *titleContent;
@property (copy, nonatomic) NSArray *bodyContent;
@property (copy, nonatomic) NSString *bodyText;
@property (copy, nonatomic) TPSAssets *assets;

+ (id)classSet;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
