@class NSArray;

@interface SSVSAPSignaturePolicy : NSObject <NSCopying>

@property (readonly, nonatomic) long long policyType;
@property (readonly, copy, nonatomic) NSArray *signatureComponents;

- (id)dataToSignWithURLResponse:(id)a0 responseData:(id)a1;
- (id)initWithPolicyType:(long long)a0;
- (id)_dataToSignWithDataSource:(id)a0;
- (id)dataToSignWithRequestProperties:(id)a0;
- (id)initWithPolicyType:(long long)a0 signatureComponents:(id)a1;
- (void).cxx_destruct;
- (id)dataToSignWithURLRequest:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSignedActionsDictionary:(id)a0;

@end
