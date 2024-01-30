@class NSArray;

@interface SASyncServerVerifyResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *internalVerifications;
@property (copy, nonatomic) NSArray *serverChecksums;
@property (copy, nonatomic) NSArray *syncDebugInfo;

+ (id)serverVerifyResponse;
+ (id)serverVerifyResponseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
