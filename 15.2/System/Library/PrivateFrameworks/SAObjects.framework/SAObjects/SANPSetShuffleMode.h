@class NSArray, NSString;

@interface SANPSetShuffleMode : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *shuffleMode;

+ (id)setShuffleMode;
+ (id)setShuffleModeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
