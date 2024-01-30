@class NSArray, NSMutableArray;

@interface MLPNDArrayLossLabels : NSObject

@property (retain) NSMutableArray *largeReductionSumResult;
@property (retain) NSMutableArray *smallReductionSumResult;
@property (retain) NSArray *labels;

- (void).cxx_destruct;
- (id)init;

@end
