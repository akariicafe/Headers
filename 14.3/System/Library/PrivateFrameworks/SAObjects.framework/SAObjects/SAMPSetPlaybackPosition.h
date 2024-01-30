@interface SAMPSetPlaybackPosition : SADomainCommand

@property (nonatomic) int position;

+ (id)setPlaybackPosition;
+ (id)setPlaybackPositionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
