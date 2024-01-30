@class NSString;

@interface SAStructuredDictationFailed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *recognition;
@property (copy, nonatomic) NSString *userFacingReasonDescription;
@property (copy, nonatomic) NSString *userFacingReasonTitle;

+ (id)structuredDictationFailed;
+ (id)structuredDictationFailedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
