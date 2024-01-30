@class UINotificationFeedbackGenerator, UIImpactFeedbackGenerator, _UIDragSnappingFeedbackGenerator;

@interface MKHapticEngine : NSObject {
    UINotificationFeedbackGenerator *_notificationGenerator;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _UIDragSnappingFeedbackGenerator *_dragSnappingGenerator;
    BOOL _isDragging;
}

- (void)draggedObjectLifted;
- (void)draggedObjectLanded;
- (id)init;
- (void)prepare;
- (void).cxx_destruct;
- (void)playFailure;
- (void)playSuccess;

@end
