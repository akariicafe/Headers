@class UINotificationFeedbackGenerator, UIImpactFeedbackGenerator, _UIDragSnappingFeedbackGenerator;

@interface MKHapticEngine : NSObject {
    UINotificationFeedbackGenerator *_notificationGenerator;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _UIDragSnappingFeedbackGenerator *_dragSnappingGenerator;
    BOOL _isDragging;
}

- (void)playFailure;
- (void)prepare;
- (void)playSuccess;
- (void).cxx_destruct;
- (id)init;
- (void)draggedObjectLanded;
- (void)draggedObjectLifted;

@end
