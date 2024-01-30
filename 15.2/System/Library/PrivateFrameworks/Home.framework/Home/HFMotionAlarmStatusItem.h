@interface HFMotionAlarmStatusItem : HFAbstractPresenceStatusItem

- (id)_serviceType;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;
- (id)oneReadyFormatString;
- (id)multipleReadyFormatString;
- (id)oneTriggeredWithRoomFormatString;
- (id)oneTriggeredFormatString;
- (id)multipleTriggeredFormatString;
- (id)multipleTriggeredWithRoomsFormatString;

@end
