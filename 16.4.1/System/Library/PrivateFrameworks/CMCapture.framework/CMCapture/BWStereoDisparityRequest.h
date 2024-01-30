@class BWStereoDisparityProcessorInput;
@protocol BWStillImageProcessorControllerDelegate;

@interface BWStereoDisparityRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWStereoDisparityProcessorInput *input;
@property (readonly, nonatomic) id<BWStillImageProcessorControllerDelegate> delegate;

- (void)dealloc;
- (id)description;

@end
