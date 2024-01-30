@class BWDroppedSample;

@interface BWNodeDroppedSampleMessage : BWNodeMessage {
    BWDroppedSample *_droppedSample;
}

@property (readonly) BWDroppedSample *droppedSample;

+ (id)newMessageWithDroppedSample:(id)a0;

- (void)dealloc;
- (id)_initWithDroppedSample:(id)a0;

@end
