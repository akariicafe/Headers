@class NSArray, NSString, SAMPMediaItem, NSNumber;

@interface SAMPGeniusSummon : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPMediaItem *mediaItem;
@property (copy, nonatomic) NSNumber *startPlaying;
@property (copy, nonatomic) NSString *upNextQueueInsertLocation;

+ (id)geniusSummon;
+ (id)geniusSummonWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
