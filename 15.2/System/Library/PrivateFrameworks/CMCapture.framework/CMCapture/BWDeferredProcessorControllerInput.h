@class BWDeferredProcessorController, BWDeferredProcessingContainer, NSString;

@interface BWDeferredProcessorControllerInput : BWStillImageProcessorInput

@property (nonatomic) BWDeferredProcessorController *processorController;
@property (readonly, nonatomic) BWDeferredProcessingContainer *container;
@property (readonly, nonatomic) NSString *photoIdentifier;

- (void)dealloc;
- (void)setContainer:(id)a0 photoIdentifier:(id)a1;

@end
