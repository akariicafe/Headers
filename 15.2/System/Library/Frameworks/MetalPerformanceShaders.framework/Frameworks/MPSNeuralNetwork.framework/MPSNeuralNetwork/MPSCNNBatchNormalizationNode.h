@class NSString;
@protocol MPSCNNBatchNormalizationDataSource;

@interface MPSCNNBatchNormalizationNode : MPSNNFilterNode <MPSNNTrainableNode> {
    id<MPSCNNBatchNormalizationDataSource> _dataSource;
}

@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long trainingStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeWithSource:(id)a0 dataSource:(id)a1;

- (void)dealloc;
- (void *)newFilterNode;
- (Class)gradientClass;
- (id)sourceStates;
- (id)resultStates;
- (id)initWithSource:(id)a0 dataSource:(id)a1;
- (BOOL)calculateStatistics;

@end
