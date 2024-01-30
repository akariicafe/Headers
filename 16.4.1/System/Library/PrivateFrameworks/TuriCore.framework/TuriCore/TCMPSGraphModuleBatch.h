@class NSArray;
@protocol MTLCommandBuffer;

@interface TCMPSGraphModuleBatch : NSObject

@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) NSArray *input;
@property (retain, nonatomic) NSArray *grad;
@property (retain, nonatomic) NSArray *lossState;
@property (retain, nonatomic) NSArray *output;

- (id)initWithCommandBuffer:(id)a0;
- (void).cxx_destruct;

@end
