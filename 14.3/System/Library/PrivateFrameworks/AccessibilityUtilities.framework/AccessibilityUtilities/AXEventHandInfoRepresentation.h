@class NSArray, NSString;

@interface AXEventHandInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char swipe;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) unsigned short initialFingerCount;
@property (nonatomic) unsigned short currentFingerCount;
@property (retain, nonatomic) NSArray *paths;
@property (nonatomic) unsigned char systemGesturePossible;
@property (nonatomic) unsigned int handIdentity;
@property (nonatomic) unsigned int handIndex;
@property (nonatomic) struct CGPoint { double x; double y; } handPosition;
@property (readonly, nonatomic) BOOL isStylus;
@property (nonatomic) unsigned int handEventMask;
@property (nonatomic) unsigned int additionalHandEventFlagsForGeneratedEvents;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)representationWithHandInfo:(struct { int x0; unsigned short x1; unsigned short x2; float x3; float x4; float x5; float x6; float x7; float x8; unsigned char x9; unsigned char x10; unsigned char x11; struct { unsigned char x0; unsigned char x1; unsigned char x2; float x3; float x4; struct CGPoint { double x0; double x1; } x5; unsigned int x6; void *x7; } x12[0]; } *)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)accessibilityEventRepresentationTabularDescription;
- (void)writeToHandInfo:(struct { int x0; unsigned short x1; unsigned short x2; float x3; float x4; float x5; float x6; float x7; float x8; unsigned char x9; unsigned char x10; unsigned char x11; struct { unsigned char x0; unsigned char x1; unsigned char x2; float x3; float x4; struct CGPoint { double x0; double x1; } x5; unsigned int x6; void *x7; } x12[0]; } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
