@class NSArray, NSSet, NSString;

@interface PGGraphMusicTrackNode : PGGraphOptimizedNode

@property (class, readonly, nonatomic) NSArray *musicTrackTitleSortDescriptors;

@property (readonly, nonatomic) NSSet *albumNodes;
@property (readonly, nonatomic) NSSet *genreNodes;
@property (readonly, nonatomic) NSSet *artistNodes;
@property (readonly) double durationInSeconds;
@property (readonly, nonatomic) NSString *title;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)description;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;
- (void)enumerateAlbumNodesUsingBlock:(id /* block */)a0;
- (void)enumerateGenreNodesUsingBlock:(id /* block */)a0;
- (void)enumerateArtistNodesUsingBlock:(id /* block */)a0;

@end
