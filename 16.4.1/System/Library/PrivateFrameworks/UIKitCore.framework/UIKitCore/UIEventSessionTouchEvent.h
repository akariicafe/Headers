@class NSMutableDictionary;

@interface UIEventSessionTouchEvent : NSObject

@property (retain) NSMutableDictionary *touchStatus;
@property long long touchType;
@property long long trackpadFingerDownCount;

- (void).cxx_destruct;
- (BOOL)containsTouchID:(id)a0;
- (id)initWithTouchType:(long long)a0 withTrackpadFingerDownCount:(long long)a1;

@end
