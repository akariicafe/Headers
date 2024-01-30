@class NSString;

@interface SASessionValidationFailed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *errorCode;

+ (id)sessionValidationFailed;
+ (id)sessionValidationFailedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
