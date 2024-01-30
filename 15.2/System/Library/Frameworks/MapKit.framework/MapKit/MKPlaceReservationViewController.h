@class _MKPlaceReservationInfo, NSString, MKPlaceReservationRowView;

@interface MKPlaceReservationViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {
    MKPlaceReservationRowView *_reservationCell;
}

@property (retain, nonatomic) _MKPlaceReservationInfo *reservationInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
