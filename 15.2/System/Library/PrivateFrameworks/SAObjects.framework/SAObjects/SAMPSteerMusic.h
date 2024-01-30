@class NSArray, SAMPCollection, NSString, SAMPMediaItem;

@interface SAMPSteerMusic : SADomainCommand

@property (retain, nonatomic) SAMPCollection *currentListeningToCollection;
@property (retain, nonatomic) SAMPMediaItem *currentListeningToItem;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *steerableBlob;

+ (id)steerMusic;
+ (id)steerMusicWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
