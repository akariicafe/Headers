@interface _UICollectionEdgeSpacingSolution : NSObject {
    BOOL _isFlexible;
}

@property (nonatomic) double spacing;
@property (readonly, nonatomic) BOOL isFlexible;

- (id)description;
- (id)initWithSpacing:(double)a0 isFlexible:(BOOL)a1;

@end
