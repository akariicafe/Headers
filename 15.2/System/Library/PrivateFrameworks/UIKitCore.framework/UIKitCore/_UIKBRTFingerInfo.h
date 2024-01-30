@interface _UIKBRTFingerInfo : NSObject <NSCopying>

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) double radius;
@property (nonatomic) double lastSeenTimestamp;
@property (nonatomic) unsigned long long identity;
@property (nonatomic) BOOL unknownSeen;
@property (readonly, nonatomic) double feedbackAlpha;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
