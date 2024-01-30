@class NSArray;

@interface SASyncSetDeepSyncVerificationNeeded : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *keys;

+ (id)setDeepSyncVerificationNeeded;
+ (id)setDeepSyncVerificationNeededWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
