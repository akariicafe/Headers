@class NSString, UITouch, UIEvent;

@interface UIGestureDelayedTouch : NSObject <NSCopying, _UIGestureDelaying> {
    UITouch *_touch;
    UITouch *_stateWhenDelayed;
    UITouch *_stateWhenDelivered;
    UIEvent *_event;
    long long _delayCount;
    BOOL _cloneForSecondDelivery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)timestampForDelivery;
- (long long)phaseForDelivery;

@end
