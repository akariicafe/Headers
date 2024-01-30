@class NSString, NSArray;

@interface SATTSEstimateTTSRequestDuration : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSArray *texts;

+ (id)estimateTTSRequestDuration;
+ (id)estimateTTSRequestDurationWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
