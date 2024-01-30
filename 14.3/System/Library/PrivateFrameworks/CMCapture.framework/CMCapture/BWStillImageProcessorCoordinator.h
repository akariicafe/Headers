@class NSDictionary;

@interface BWStillImageProcessorCoordinator : NSObject {
    NSDictionary *_processorControllersByType;
}

- (id)initWithProcessorControllers:(id)a0;
- (void)dealloc;
- (id)processorControllerNames;
- (id)controllerForType:(unsigned long long)a0;

@end
