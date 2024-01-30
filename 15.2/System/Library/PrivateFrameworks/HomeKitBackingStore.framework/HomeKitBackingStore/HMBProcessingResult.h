@class NSArray, HMBProcessingOptions, NAFuture;

@interface HMBProcessingResult : HMFObject

@property (readonly, nonatomic) HMBProcessingOptions *options;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NAFuture *mirrorOutputResult;

- (id)initWithOptions:(id)a0 actions:(id)a1 mirrorOutputResult:(id)a2;
- (void).cxx_destruct;

@end
