@class AXEventRepresentation, NSString;

@interface AXEventPointerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double pointerX;
@property (nonatomic) double pointerY;
@property (nonatomic) double pointerZ;
@property (nonatomic) double pointerAccelX;
@property (nonatomic) double pointerAccelY;
@property (nonatomic) double pointerAccelZ;
@property (nonatomic) BOOL isPointerMove;
@property (nonatomic) double pointerButtonMask;
@property (nonatomic) double pointerButtonNumber;
@property (nonatomic) double pointerButtonClickCount;
@property (nonatomic) double pointerButtonPressure;
@property (nonatomic) BOOL pointerIsAbsolute;
@property (retain, nonatomic) AXEventRepresentation *scrollEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityEventRepresentationTabularDescription;

@end
