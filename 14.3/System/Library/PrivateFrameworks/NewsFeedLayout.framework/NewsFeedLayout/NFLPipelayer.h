@class NSArray, NSObject;
@protocol NFLPipeSegment, NFLPipelayerDelegate;

@interface NFLPipelayer : NSObject

@property (copy, nonatomic) NSArray *pipeUnits;
@property (retain, nonatomic) NSObject<NFLPipeSegment> *previousPipeSegment;
@property (retain, nonatomic) NSObject<NFLPipeSegment> *nextPipeSegment;
@property (weak, nonatomic) id<NFLPipelayerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)layPipeWithWallTime:(double)a0 qualityOfService:(long long)a1;
- (id)initWithPipe:(id)a0 previousPipeSegment:(id)a1 nextPipeSegment:(id)a2;

@end
