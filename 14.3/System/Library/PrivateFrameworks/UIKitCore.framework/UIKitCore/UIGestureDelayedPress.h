@class NSString, UIPress, UIPressesEvent;

@interface UIGestureDelayedPress : NSObject <NSCopying, _UIGestureDelaying> {
    long long _delayCount;
    BOOL _cloneForSecondDelivery;
    UIPress *_press;
    UIPress *_stateWhenDelayed;
    UIPress *_stateWhenDelivered;
    UIPressesEvent *_event;
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
