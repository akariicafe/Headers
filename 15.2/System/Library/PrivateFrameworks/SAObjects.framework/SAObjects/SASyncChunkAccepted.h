@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (retain, nonatomic) SASyncAnchor *current;

+ (id)chunkAccepted;
+ (id)chunkAcceptedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
