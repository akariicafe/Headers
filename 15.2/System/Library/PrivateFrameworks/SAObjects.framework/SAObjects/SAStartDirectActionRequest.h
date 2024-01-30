@class NSString, NSDictionary;

@interface SAStartDirectActionRequest : SAStartRequest

@property (copy, nonatomic) NSString *directAction;
@property (copy, nonatomic) NSDictionary *requestExecutionParameters;
@property (copy, nonatomic) NSString *utteranceFromRequestParameters;

+ (id)startDirectActionRequest;
+ (id)startDirectActionRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
