@class NSString, NSArray, NSNumber;

@interface SAMPPodcastCollection : SAMPCollection

@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSArray *preferredPlayOrder;
@property (copy, nonatomic) NSString *sortArtist;
@property (copy, nonatomic) NSNumber *subscribed;

+ (id)podcastCollection;
+ (id)podcastCollectionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
