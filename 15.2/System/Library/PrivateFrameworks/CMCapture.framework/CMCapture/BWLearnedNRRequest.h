@class BWLearnedNROutput, BWLearnedNRInput;
@protocol BWLearnedNRProcessorControllerDelegate;

@interface BWLearnedNRRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWLearnedNRInput *input;
@property (readonly, nonatomic) BWLearnedNROutput *output;
@property (readonly, nonatomic) id<BWLearnedNRProcessorControllerDelegate> delegate;

- (id)description;
- (void)dealloc;
- (BOOL)receivedAllBuffers;
- (id)initWithInput:(id)a0 output:(id)a1 delegate:(id)a2;

@end
