@class NSObject;
@protocol OS_dispatch_queue, AEAccessibilityServerPrimitives, AEObservation;

@interface AEAccessibilityServerBackedAssessmentStateReader : NSObject <AEAssessmentStateReading> {
    id<AEAccessibilityServerPrimitives> _accessibilityServerPrimitives;
    NSObject<OS_dispatch_queue> *_queue;
    id<AEObservation> _guidedAccessActiveStateChangeObservation;
}

@property (nonatomic, getter=isActive) BOOL active;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccessibilityServerPrimitives:(id)a0 queue:(id)a1;

@end
