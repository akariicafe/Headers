@class NSString;

@interface NMSPodcastReferenceObject : NSObject

@property (readonly, nonatomic) NSString *feedURL;
@property (nonatomic) unsigned long long episodeLimit;
@property (readonly, nonatomic) unsigned long long downloadOrder;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFeedURL:(id)a0 downloadOrder:(unsigned long long)a1;
- (id)initWithFeedURL:(id)a0 episodeLimit:(unsigned long long)a1 downloadOrder:(unsigned long long)a2;
- (id)predicatesForFeedURL;

@end
