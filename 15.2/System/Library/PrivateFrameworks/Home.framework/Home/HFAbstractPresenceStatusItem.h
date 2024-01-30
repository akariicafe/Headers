@interface HFAbstractPresenceStatusItem : HFStatusItem

- (id)_serviceType;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)oneReadyFormatString;
- (id)multipleReadyFormatString;
- (id)oneTriggeredWithRoomFormatString;
- (id)oneTriggeredFormatString;
- (id)multipleTriggeredFormatString;
- (id)multipleTriggeredWithRoomsFormatString;

@end
