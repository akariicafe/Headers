@class NSNumber;

@interface PLDisplayAODStats : NSObject

@property (retain) NSNumber *awakeCount;
@property (retain) NSNumber *mediaCount;
@property (retain) NSNumber *flipbookCount;
@property (retain) NSNumber *flipbookDelay;
@property (retain) NSNumber *mediaScanout;
@property (retain) NSNumber *ambientCount;
@property (retain) NSNumber *prcRepeatCoun;
@property (retain) NSNumber *pdcRepeatCoun;
@property (retain) NSNumber *llmCount;
@property (retain) NSNumber *aplSum;
@property (retain) NSNumber *aplCount;

- (void).cxx_destruct;

@end
