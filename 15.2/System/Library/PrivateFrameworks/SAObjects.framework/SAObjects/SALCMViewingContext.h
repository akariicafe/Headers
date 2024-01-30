@class NSString, NSArray, SALCMContent, NSNumber;

@interface SALCMViewingContext : SADomainObject

@property (nonatomic) BOOL commercialPlaying;
@property (copy, nonatomic) NSNumber *durationInMilliseconds;
@property (retain, nonatomic) SALCMContent *nowPlaying;
@property (copy, nonatomic) NSString *nowPlayingAppId;
@property (nonatomic) BOOL paused;
@property (copy, nonatomic) NSNumber *playbackPositionInMilliseconds;
@property (copy, nonatomic) NSArray *viewingHistory;

+ (id)viewingContext;
+ (id)viewingContextWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
