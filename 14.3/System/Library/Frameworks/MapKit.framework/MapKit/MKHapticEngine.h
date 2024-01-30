@class UINotificationFeedbackGenerator, UIImpactFeedbackGenerator, _UIDragSnappingFeedbackGenerator;

@interface MKHapticEngine : NSObject {
    UINotificationFeedbackGenerator *_notificationGenerator;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _UIDragSnappingFeedbackGenerator *_dragSnappingGenerator;
    BOOL _isDragging;
}

- (void)prepare;
- (id)init;
- (void).cxx_destruct;
- (void)playSuccess;
- (void)draggedObjectLifted;
- (void)playFailure;
- (void)draggedObjectLanded;

@end
