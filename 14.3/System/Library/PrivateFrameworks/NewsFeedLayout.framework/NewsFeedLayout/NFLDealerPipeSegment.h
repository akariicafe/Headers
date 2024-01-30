@class NFLSubBatchLayout;

@interface NFLDealerPipeSegment : NSObject <NFLPipeSegment>

@property (nonatomic) unsigned long long pipeSegmentType;
@property (retain, nonatomic) NFLSubBatchLayout *subBatchLayout;
@property (copy, nonatomic) id /* block */ segmentTypeDescriptionProvider;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSegmentType:(unsigned long long)a0 subBatchLayout:(id)a1 segmentTypeDescriptionProvider:(id /* block */)a2;
- (id)description;

@end
