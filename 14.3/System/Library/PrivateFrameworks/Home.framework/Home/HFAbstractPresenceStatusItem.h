@interface HFAbstractPresenceStatusItem : HFStatusItem

- (id)_serviceType;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)oneReadyFormatString;
- (id)multipleReadyFormatString;
- (id)oneTriggeredWithRoomFormatString;
- (id)oneTriggeredFormatString;
- (id)multipleTriggeredFormatString;
- (id)multipleTriggeredWithRoomsFormatString;
- (id)_entireHomeString;
- (id)_singleTriggeredRoomFormatString;
- (id)_subclass_updateWithOptions:(id)a0;

@end
