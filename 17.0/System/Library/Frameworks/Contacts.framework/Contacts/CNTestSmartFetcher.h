@class NSArray, NSString;

@interface CNTestSmartFetcher : NSObject <CNKeyDescriptor_Private>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *requiredKeys;
@property (readonly, nonatomic) NSArray *optionalKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_cn_requiredKeys;
- (id)_cn_optionalKeys;
- (id)_cn_ignorableKeys;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequiredKeys:(id)a0 optionalKeys:(id)a1;

@end
