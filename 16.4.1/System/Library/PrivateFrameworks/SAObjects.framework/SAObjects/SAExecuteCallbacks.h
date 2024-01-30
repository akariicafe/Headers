@interface SAExecuteCallbacks : SABaseClientBoundCommand

+ (id)executeCallbacks;
+ (id)executeCallbacksWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
