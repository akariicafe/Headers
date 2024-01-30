@class NSString;

@interface _UITouchForceObservationMessageReader : NSObject <_UITouchForceObservationMessageReading>

@property (nonatomic) double touchForce;
@property (nonatomic) double timestamp;
@property (nonatomic) struct CGPoint { double x; double y; } centroid;
@property (nonatomic) BOOL shouldFilterDueToSystemGestures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
