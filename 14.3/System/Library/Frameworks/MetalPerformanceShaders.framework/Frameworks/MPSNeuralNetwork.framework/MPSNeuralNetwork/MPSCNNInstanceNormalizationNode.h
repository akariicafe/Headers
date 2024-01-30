@class NSString;
@protocol MPSCNNInstanceNormalizationDataSource;

@interface MPSCNNInstanceNormalizationNode : MPSNNFilterNode <MPSNNTrainableNode> {
    id<MPSCNNInstanceNormalizationDataSource> _dataSource;
}

@property (nonatomic) unsigned long long trainingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeWithSource:(id)a0 dataSource:(id)a1;

@end
