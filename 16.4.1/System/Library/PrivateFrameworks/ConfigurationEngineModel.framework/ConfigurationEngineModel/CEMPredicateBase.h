@class NSString;

@interface CEMPredicateBase : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadType;

+ (id)predicateForPayload:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithOptions:(id)a0 error:(id *)a1;

@end
