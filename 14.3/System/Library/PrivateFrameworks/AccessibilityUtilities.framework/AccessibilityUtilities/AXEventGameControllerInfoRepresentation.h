@class NSString;

@interface AXEventGameControllerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double directionPadUp;
@property (nonatomic) double directionPadDown;
@property (nonatomic) double directionPadLeft;
@property (nonatomic) double directionPadRight;
@property (nonatomic) double faceButtonA;
@property (nonatomic) double faceButtonB;
@property (nonatomic) double faceButtonX;
@property (nonatomic) double faceButtonY;
@property (nonatomic) double shoulderButtonR1;
@property (nonatomic) double shoulderButtonR2;
@property (nonatomic) double shoulderButtonL1;
@property (nonatomic) double shoulderButtonL2;
@property (nonatomic) double leftJoystickX;
@property (nonatomic) double leftJoystickY;
@property (nonatomic) double rightJoystickX;
@property (nonatomic) double rightJoystickY;
@property (readonly, nonatomic) BOOL rightJoystickActive;
@property (readonly, nonatomic) BOOL leftJoystickActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
