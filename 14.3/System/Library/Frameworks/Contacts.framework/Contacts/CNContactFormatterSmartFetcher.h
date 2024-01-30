@class NSSet, NSDictionary;

@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {
    NSSet *_mandatoryNameProperties;
    NSDictionary *_fallBackNamePropertyByNameKey;
}

@property (nonatomic) BOOL ignoresNickname;
@property (nonatomic) BOOL ignoresOrganization;

+ (BOOL)supportsSecureCoding;

- (id)_cn_optionalKeys;
- (id)_cn_ignorableKeys;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (id)_cn_requiredKeys;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
