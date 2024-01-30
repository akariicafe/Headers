@class NSArray, NSSet, NSString;

@interface PGGraphMusicTrackNode : PGGraphOptimizedNode

@property (class, readonly, nonatomic) NSArray *musicTrackTitleSortDescriptors;

@property (readonly, nonatomic) NSSet *albumNodes;
@property (readonly, nonatomic) NSSet *genreNodes;
@property (readonly, nonatomic) NSSet *artistNodes;
@property (readonly) double durationInSeconds;
@property (readonly, nonatomic) NSString *title;

- (BOOL)hasProperties:(id)a0;
- (id)description;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithTitle:(id)a0 durationInSeconds:(double)a1;
- (void)enumerateAlbumNodesUsingBlock:(id /* block */)a0;
- (void)enumerateGenreNodesUsingBlock:(id /* block */)a0;
- (void)enumerateArtistNodesUsingBlock:(id /* block */)a0;

@end
