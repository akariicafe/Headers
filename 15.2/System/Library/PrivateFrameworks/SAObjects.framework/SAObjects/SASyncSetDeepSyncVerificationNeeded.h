@class NSArray;

@interface SASyncSetDeepSyncVerificationNeeded : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *keys;

+ (id)setDeepSyncVerificationNeeded;
+ (id)setDeepSyncVerificationNeededWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
