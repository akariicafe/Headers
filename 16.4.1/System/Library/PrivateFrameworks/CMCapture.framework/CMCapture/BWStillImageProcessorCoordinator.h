@class NSDictionary;

@interface BWStillImageProcessorCoordinator : NSObject {
    NSDictionary *_processorControllersByType;
}

- (id)controllerForType:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithProcessorControllers:(id)a0;
- (id)processorControllerNames;

@end
