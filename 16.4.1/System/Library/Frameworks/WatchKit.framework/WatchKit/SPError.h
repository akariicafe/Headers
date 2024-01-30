@interface SPError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 additionalDescription:(id)a1;
+ (BOOL)isValidationErrorCode:(long long)a0;

@end
