@class NSString;

@interface LikelyAVFlowDetails : NSObject

@property (retain, nonatomic) NSString *owner;
@property (nonatomic) int matchScore;
@property (nonatomic) double relevantThroughput;

- (void).cxx_destruct;
- (id)description;

@end
