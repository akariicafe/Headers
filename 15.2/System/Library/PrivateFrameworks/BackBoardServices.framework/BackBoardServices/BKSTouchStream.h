@interface BKSTouchStream : NSObject

@property unsigned int reference;

- (void)setEventDispatchMode:(unsigned char)a0 ambiguityRecommendation:(unsigned char)a1 lastTouchTimestamp:(double)a2;
- (id)initWithContextID:(unsigned int)a0 displayUUID:(id)a1 identifier:(unsigned char)a2 policy:(id)a3;
- (void)invalidate;
- (void)setEventDispatchMode:(unsigned char)a0 lastTouchTimestamp:(double)a1;

@end
