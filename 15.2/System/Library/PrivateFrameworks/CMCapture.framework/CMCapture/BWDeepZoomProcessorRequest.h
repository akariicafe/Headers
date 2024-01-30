@class BWDeepZoomProcessorInput;
@protocol BWDeepZoomProcessorControllerDelegate;

@interface BWDeepZoomProcessorRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWDeepZoomProcessorInput *input;
@property (readonly, nonatomic) id<BWDeepZoomProcessorControllerDelegate> delegate;

- (id)description;
- (void)dealloc;
- (id)initWithInput:(id)a0 delegate:(id)a1;

@end
