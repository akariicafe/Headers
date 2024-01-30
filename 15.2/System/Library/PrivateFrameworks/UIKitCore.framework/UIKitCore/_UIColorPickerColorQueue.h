@class _UIColorPickerColorQueueContainer, CADisplayLink;
@protocol _UIColorPickerColorQueueDelegate;

@interface _UIColorPickerColorQueue : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) _UIColorPickerColorQueueContainer *latestObject;
@property (weak, nonatomic) id<_UIColorPickerColorQueueDelegate> delegate;

- (void)_pickerDidSelectColor:(id)a0 colorspace:(id)a1 isVolatile:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)_displayLinkFired;
- (void)_forwardToDelegate:(id)a0;

@end
