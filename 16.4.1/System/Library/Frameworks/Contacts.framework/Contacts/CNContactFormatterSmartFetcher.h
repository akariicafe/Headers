@class NSSet, NSDictionary;

@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {
    NSSet *_mandatoryNameProperties;
    NSDictionary *_fallBackNamePropertyByNameKey;
}

@property (nonatomic) BOOL ignoresNickname;
@property (nonatomic) BOOL ignoresOrganization;

+ (BOOL)supportsSecureCoding;

- (id)_cn_requiredKeys;
- (void)encodeWithCoder:(id)a0;
- (id)_cn_optionalKeys;
- (id)initWithCoder:(id)a0;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_cn_ignorableKeys;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
