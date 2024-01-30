@class EKUILocationRowModel, NSString, NSMutableDictionary, NSMutableArray;

@interface EKUILocationEditItemModel : NSObject

@property (retain, nonatomic) NSMutableArray *rowModels;
@property (retain, nonatomic) NSMutableDictionary *conferenceRoomInfos;
@property (readonly, nonatomic) BOOL hasVirtualConference;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (readonly, nonatomic) BOOL displaysPlaceholder;
@property (readonly, nonatomic) NSString *placeholderCellText;
@property (readonly, nonatomic) EKUILocationRowModel *virtualConferenceRowModel;
@property (readonly, nonatomic) EKUILocationRowModel *mapLocationRowModel;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)_conferenceRoomNameForLocation:(id)a0;
- (void)_deleteVirtualConferenceOnEvent:(id)a0 forRowModel:(id)a1;
- (id)_participantForConferenceRoomName:(id)a0 event:(id)a1;
- (void)_removeConferenceAttendeeOnEvent:(id)a0 forRowModel:(id)a1;
- (id)_rowModelForCell:(id)a0;
- (void)_updateConferenceDataOnEvent:(id)a0 forNewLocation:(id)a1;
- (void)_updateLocationsOnEvent:(id)a0;
- (long long)indexOfPredictedLocation;
- (void)rebuild:(id)a0;
- (void)refreshConferenceRoomCell:(id)a0 event:(id)a1;
- (void)removeConferenceRoomAttendeeIfNeeded:(id)a0 event:(id)a1;
- (void)removeRowModel:(id)a0 event:(id)a1;
- (void)removeRowModelAtIndex:(unsigned long long)a0 event:(id)a1;
- (void)reorderRowModels;
- (BOOL)rowModelRepresentsConferenceRoom:(id)a0 onEvent:(id)a1;
- (BOOL)shouldDisplayRowModelWithConferenceCell:(id)a0 event:(id)a1;
- (void)updateAvailabilityInformation:(id)a0;
- (void)updateRowModel:(id)a0 withConferenceRoom:(id)a1 editItem:(id)a2;
- (void)updateRowModel:(id)a0 withMapLocation:(id)a1 event:(id)a2;
- (void)updateRowModel:(id)a0 withVirtualConference:(id)a1 event:(id)a2;

@end
