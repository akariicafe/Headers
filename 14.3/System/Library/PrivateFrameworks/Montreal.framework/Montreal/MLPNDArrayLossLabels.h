@class NSArray, NSMutableArray;

@interface MLPNDArrayLossLabels : NSObject

@property (retain) NSMutableArray *largeReductionSumResult;
@property (retain) NSMutableArray *smallReductionSumResult;
@property (retain) NSArray *labels;

- (id)init;
- (void).cxx_destruct;

@end
