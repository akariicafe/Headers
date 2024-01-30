@class NSString;

@interface LikelyAVFlowDetails : NSObject

@property (retain, nonatomic) NSString *owner;
@property (nonatomic) int matchScore;
@property (nonatomic) double relevantThroughput;

- (id)description;
- (void).cxx_destruct;

@end
