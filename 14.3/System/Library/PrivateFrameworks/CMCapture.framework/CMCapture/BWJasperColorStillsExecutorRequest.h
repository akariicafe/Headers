@class BWJasperColorStillsExecutorInput;
@protocol BWJasperColorStillsExecutorControllerDelegate;

@interface BWJasperColorStillsExecutorRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWJasperColorStillsExecutorInput *input;
@property (readonly, nonatomic) id<BWJasperColorStillsExecutorControllerDelegate> delegate;

- (void)dealloc;
- (id)description;
- (id)initWithInput:(id)a0 delegate:(id)a1;

@end
