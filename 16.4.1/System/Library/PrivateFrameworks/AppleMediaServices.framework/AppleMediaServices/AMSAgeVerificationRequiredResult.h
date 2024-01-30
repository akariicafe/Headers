@interface AMSAgeVerificationRequiredResult : NSObject

@property BOOL isVerificationRequired;
@property unsigned long long requiredType;

- (id)initWithRequiredType:(unsigned long long)a0;

@end
