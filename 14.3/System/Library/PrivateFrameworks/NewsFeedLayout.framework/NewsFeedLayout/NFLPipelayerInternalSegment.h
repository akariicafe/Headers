@class NSObject;
@protocol NFLPipeSegment, NFLPipelayerDelegate;

@interface NFLPipelayerInternalSegment : NSObject

@property (nonatomic) unsigned long long pipeSegmentType;
@property (nonatomic) unsigned long long cumulativeHeadlinesUsedCount;
@property (retain, nonatomic) NSObject<NFLPipeSegment> *pipeSegment;
@property (weak, nonatomic) id<NFLPipelayerDelegate> delegate;

- (void).cxx_destruct;
- (id)description;

@end
