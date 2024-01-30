@class BWDeferredProcessorControllerInput, FigWeakReference;
@protocol BWDeferredProcessorControllerDelegate;

@interface BWDeferredProcessorRequest : NSObject {
    FigWeakReference *_delegateStorage;
}

@property (nonatomic) int err;
@property (readonly, nonatomic) BWDeferredProcessorControllerInput *input;
@property (readonly, nonatomic) id<BWDeferredProcessorControllerDelegate> delegate;

- (void)dealloc;
- (id)description;

@end
