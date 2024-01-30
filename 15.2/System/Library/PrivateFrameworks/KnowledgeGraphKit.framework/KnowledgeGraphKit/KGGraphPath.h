@interface KGGraphPath : NSObject

@property (readonly, nonatomic) unsigned long long sourceNodeIdentifier;
@property (readonly, nonatomic) unsigned long long targetNodeIdentifier;
@property (readonly, nonatomic) unsigned long long numberOfPaths;

- (id)description;
- (id)initWithSourceNodeIdentifier:(unsigned long long)a0 targetNodeIdentifier:(unsigned long long)a1 numberOfPaths:(unsigned long long)a2;

@end
