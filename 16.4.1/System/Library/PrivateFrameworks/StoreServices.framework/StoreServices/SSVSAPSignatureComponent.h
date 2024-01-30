@class NSString;

@interface SSVSAPSignatureComponent : NSObject <NSCopying>

@property (readonly, nonatomic) long long componentType;
@property (readonly, copy, nonatomic) NSString *key;

- (id)initWithComponentType:(long long)a0 key:(id)a1;
- (id)dataToSignWithURLResponse:(id)a0 responseData:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_dataToSignWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)dataToSignWithRequestProperties:(id)a0;
- (id)dataToSignWithURLRequest:(id)a0;

@end
