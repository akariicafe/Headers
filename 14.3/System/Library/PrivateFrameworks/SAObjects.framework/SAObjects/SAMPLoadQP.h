@class NSArray, NSNumber;

@interface SAMPLoadQP : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)loadQP;
+ (id)loadQPWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
