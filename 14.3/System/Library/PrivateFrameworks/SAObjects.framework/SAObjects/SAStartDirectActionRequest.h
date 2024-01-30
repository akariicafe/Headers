@class NSString, NSDictionary;

@interface SAStartDirectActionRequest : SAStartRequest

@property (copy, nonatomic) NSString *directAction;
@property (copy, nonatomic) NSDictionary *requestExecutionParameters;
@property (copy, nonatomic) NSString *utteranceFromRequestParameters;

+ (id)startDirectActionRequest;
+ (id)startDirectActionRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
