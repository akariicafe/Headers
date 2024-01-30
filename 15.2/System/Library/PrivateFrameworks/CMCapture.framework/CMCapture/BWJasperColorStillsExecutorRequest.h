@class BWJasperColorStillsExecutorInput;
@protocol BWJasperColorStillsExecutorControllerDelegate;

@interface BWJasperColorStillsExecutorRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWJasperColorStillsExecutorInput *input;
@property (readonly, nonatomic) id<BWJasperColorStillsExecutorControllerDelegate> delegate;

- (id)description;
- (void)dealloc;
- (id)initWithInput:(id)a0 delegate:(id)a1;

@end
