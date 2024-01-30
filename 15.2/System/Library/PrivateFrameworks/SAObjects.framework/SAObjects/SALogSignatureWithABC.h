@class NSString, NSDictionary;

@interface SALogSignatureWithABC : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSDictionary *subTypeContext;

+ (id)logSignatureWithABC;
+ (id)logSignatureWithABCWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
