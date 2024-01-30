@class NSSet;

@interface HFAbstractPresenceStatusItem : HFStatusItem <HFServiceLikeStatusItem>

@property (class, readonly, nonatomic) NSSet *serviceTypes;

- (id)_subclass_updateWithOptions:(id)a0;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)descriptionStringForTriggeredServices:(id)a0;
- (id)multipleReadyFormatString;
- (id)multipleTriggeredFormatString;
- (id)multipleTriggeredWithRoomsFormatString;
- (id)oneReadyFormatString;
- (id)oneTriggeredFormatString;
- (id)oneTriggeredWithRoomFormatString;
- (id)titleStringForTriggeredServices:(id)a0;

@end
