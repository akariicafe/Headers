@class NSArray, NSString, CNContactKeyVector;

@interface CNAggregateKeyDescriptor : NSObject <CNKeyDescriptor_Private>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *keyDescriptors;
@property (copy, nonatomic) NSString *privateDescription;
@property (retain, nonatomic) CNContactKeyVector *unauthorizedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyDescriptorWithKeyDescriptors:(id)a0 description:(id)a1;

- (id)_cn_requiredKeys;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (id)_cn_optionalKeys;
- (id)_cn_ignorableKeys;
- (id)_recursiveDescription;
- (id)_cn_unauthorizedKeys;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyDescriptors:(id)a0 description:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_cn_setUnauthorizedKeys:(id)a0;
- (id)_cn_recursiveDescriptionWithPrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
