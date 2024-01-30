@class NSString;

@interface SSVSAPSignatureComponent : NSObject <NSCopying>

@property (readonly, nonatomic) long long componentType;
@property (readonly, copy, nonatomic) NSString *key;

- (id)_dataToSignWithDataSource:(id)a0;
- (id)dataToSignWithURLResponse:(id)a0 responseData:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComponentType:(long long)a0 key:(id)a1;
- (id)dataToSignWithURLRequest:(id)a0;
- (id)dataToSignWithRequestProperties:(id)a0;

@end
