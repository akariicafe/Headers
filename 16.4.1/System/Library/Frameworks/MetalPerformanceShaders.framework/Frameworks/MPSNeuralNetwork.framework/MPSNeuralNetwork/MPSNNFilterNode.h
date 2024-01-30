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
- (id)debugDescription;
- (void)dealloc;
- (id)gradientFilterWithSource:(id)a0;
- (id)gradientFilterWithSources:(id)a0;
- (id)gradientFiltersWithSources:(id)a0;
- (id)trainingGraphWithSourceGradient:(id)a0 nodeHandler:(id /* block */)a1;
- (Class)gradientClass;
- (id)gradientFiltersWithSource:(id)a0;
- (id)initWithSourceImages:(id)a0 sourceStates:(id)a1 paddingPolicy:(id)a2;
- (struct FilterGraphNode { } *)newFilterNode;
- (id)resultStatesNoAllocate;
- (id)sourceImages;
- (id)sourceStates;

@end
