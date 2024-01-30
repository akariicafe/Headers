@class NSString;

@interface SASessionValidationFailed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *errorCode;

+ (id)sessionValidationFailed;
+ (id)sessionValidationFailedWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
