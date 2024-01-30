@class NSArray, SARemoteDevice;

@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *expressions;
@property (retain, nonatomic) SARemoteDevice *targetDevice;

+ (id)parseExpressions;
+ (id)parseExpressionsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
