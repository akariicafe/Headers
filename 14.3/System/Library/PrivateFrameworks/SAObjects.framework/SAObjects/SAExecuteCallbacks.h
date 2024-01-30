@interface SAExecuteCallbacks : SABaseClientBoundCommand

+ (id)executeCallbacks;
+ (id)executeCallbacksWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
