@class NSString;

@interface NMSPodcastReferenceObject : NSObject

@property (readonly, nonatomic) NSString *feedURL;
@property (nonatomic) unsigned long long episodeLimit;
@property (readonly, nonatomic) unsigned long long downloadOrder;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)predicatesForFeedURL;
- (id)initWithFeedURL:(id)a0 episodeLimit:(unsigned long long)a1 downloadOrder:(unsigned long long)a2;
- (id)initWithFeedURL:(id)a0 downloadOrder:(unsigned long long)a1;

@end
