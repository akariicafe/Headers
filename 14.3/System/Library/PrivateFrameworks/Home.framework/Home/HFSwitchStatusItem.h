@interface HFSwitchStatusItem : HFAbstractBinaryStatusItem

- (id)serviceTypes;
- (id)oneNormalServiceFormatString;
- (id)multipleNormalServicesFormatString;
- (id)oneAbnormalServiceFormatString;
- (id)oneAbnormalServiceWithRoomFormatString;
- (id)multipleAbnormalServicesWithRoomFormatString;
- (id)multipleAbnormalServicesFormatString;

@end
