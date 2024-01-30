@class RCPEventSenderProperties;

@interface RCPGlobalPositionEvent : NSObject <NSCopying>

@property (readonly) struct CGPoint { double x; double y; } location;
@property (readonly) double zPosition;
@property (readonly) struct { void /* unknown type, empty encoding */ vector; } orientation;
@property (readonly) unsigned long long timestamp;
@property (readonly) RCPEventSenderProperties *senderProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 zPosition:(double)a1 orientation:(struct { })a2 timestamp:(unsigned long long)a3 senderProperties:(id)a4;

@end
