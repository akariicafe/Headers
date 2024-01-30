@class NSArray, NSString, MPSNNStateNode, MPSNNImageNode, NSMutableArray;
@protocol MPSNNPadding;

@interface MPSNNFilterNode : NSObject {
    NSMutableArray *_sourceImages;
    NSMutableArray *_sourceStates;
    NSMutableArray *_resultStates;
}

@property (readonly, nonatomic) MPSNNImageNode *resultImage;
@property (readonly, nonatomic) MPSNNStateNode *resultState;
@property (readonly, nonatomic) NSArray *resultStates;
@property (retain, nonatomic) id<MPSNNPadding> paddingPolicy;
@property (copy) NSString *label;

- (id)debugQuickLookObject;
- (void)dealloc;
- (struct FilterGraphNode { } *)newFilterNode;
- (id)initWithSourceImages:(id)a0 sourceStates:(id)a1 paddingPolicy:(id)a2;
- (Class)gradientClass;
- (id)gradientFilterWithSource:(id)a0;
- (id)gradientFilterWithSources:(id)a0;
- (id)gradientFiltersWithSources:(id)a0;
- (id)sourceImages;
- (id)sourceStates;
- (id)resultStatesNoAllocate;
- (id)trainingGraphWithSourceGradient:(id)a0 nodeHandler:(id /* block */)a1;
- (id)gradientFiltersWithSource:(id)a0;
- (id)debugDescription;

@end
