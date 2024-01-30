@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (retain, nonatomic) SASyncAnchor *current;

+ (id)chunkAcceptedWithDictionary:(id)a0 context:(id)a1;
+ (id)chunkAccepted;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
