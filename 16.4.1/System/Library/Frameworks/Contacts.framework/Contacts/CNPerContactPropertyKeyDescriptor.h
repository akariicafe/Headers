@class NSString, NSMutableDictionary;

@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor_Private, CNKeyDescriptor>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *propertiesByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_cn_requiredKeys;
- (void)encodeWithCoder:(id)a0;
- (id)_cn_optionalKeys;
- (id)initWithCoder:(id)a0;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_cn_ignorableKeys;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setKeysToFetch:(id)a0 forContactIdentifier:(id)a1;

@end
