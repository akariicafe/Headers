@interface BWStillImageProcessorController : NSObject

@property (readonly, nonatomic) unsigned long long type;

- (id)initWithConfiguration:(id)a0;
- (void)cancelProcessing;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;

@end
