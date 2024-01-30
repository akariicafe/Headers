@class NSString;

@interface SAMPMusicPlaybackImminent : SADomainCommand

@property (copy, nonatomic) NSString *preloadedUserSharedUserId;

+ (id)musicPlaybackImminent;
+ (id)musicPlaybackImminentWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
