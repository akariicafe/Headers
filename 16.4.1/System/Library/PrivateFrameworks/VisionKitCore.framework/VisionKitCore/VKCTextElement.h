@class NSArray;

@interface VKCTextElement : VKCBaseElement

@property (copy, nonatomic) NSArray *_children;
@property (copy, nonatomic) NSArray *components;
@property (copy, nonatomic) NSArray *candidates;
@property (nonatomic) BOOL childrenCreated;

+ (id)textElementFromCROutputRegion:(id)a0 parentDocument:(id)a1;

- (id)children;
- (long long)elementType;
- (void).cxx_destruct;
- (id)confidenceString;
- (id)crOutputRegionTypeString;
- (void)createChildrenIfNecessary;
- (id)elementCollectionForQuad:(id)a0;
- (BOOL)isInspectableCellSelectable;

@end
