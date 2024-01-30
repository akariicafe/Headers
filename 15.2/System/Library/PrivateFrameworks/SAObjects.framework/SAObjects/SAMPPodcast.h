@class NSString;

@interface SAMPPodcast : SAMPMediaItem

@property (copy, nonatomic) NSString *seriesId;
@property (copy, nonatomic) NSString *seriesTitle;

+ (id)podcast;
+ (id)podcastWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
