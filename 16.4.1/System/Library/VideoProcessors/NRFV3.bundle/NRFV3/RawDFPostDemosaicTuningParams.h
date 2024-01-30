@class PostDemosaicTuningParams;

@interface RawDFPostDemosaicTuningParams : NSObject

@property (readonly, nonatomic) PostDemosaicTuningParams *tuningEVZero;
@property (readonly, nonatomic) PostDemosaicTuningParams *tuningEVMinus;
@property (readonly, nonatomic) PostDemosaicTuningParams *tuningLong;
@property (readonly, nonatomic) PostDemosaicTuningParams *tuningQuadra48EVZero;
@property (readonly, nonatomic) PostDemosaicTuningParams *tuningQuadra48Long;

- (void).cxx_destruct;
- (int)readPlist:(id)a0;
- (id)getTuningForFrameType:(int)a0;

@end
