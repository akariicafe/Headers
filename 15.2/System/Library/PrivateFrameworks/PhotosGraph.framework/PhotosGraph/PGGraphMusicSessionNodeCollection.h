@class PGGraphMomentNodeCollection;

@interface PGGraphMusicSessionNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;

+ (id)filter;

@end
