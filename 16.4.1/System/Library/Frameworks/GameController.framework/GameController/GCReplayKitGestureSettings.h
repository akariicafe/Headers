@class NSString;

@interface GCReplayKitGestureSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *controllerElementMappingKey;
@property (nonatomic) long long singlePressGesture;
@property (nonatomic) long long doublePressGesture;
@property (nonatomic) long long longPressGesture;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (long long)gestureModeForGestureType:(long long)a0;
- (long long)gestureTypeForGestureMode:(long long)a0;
- (void)setGestureMode:(long long)a0 forGestureType:(long long)a1;

@end
