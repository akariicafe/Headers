@class NSArray, NSDictionary, NSString, NSDate, EKUITextAndHeaderItem;

@interface EKUIEventNotificationRepresentation : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) EKUITextAndHeaderItem *titleItem;
@property (retain, nonatomic) EKUITextAndHeaderItem *subtitleItem;
@property (retain, nonatomic) NSArray *supplementaryItems;
@property (retain, nonatomic) NSDictionary *userActivityUserInfo;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSString *externalURLString;
@property (retain, nonatomic) NSArray *potentialConflictDates;
@property (retain, nonatomic) NSString *notes;
@property (readonly, nonatomic) NSDictionary *organizerContactDictionary;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)_fromLocalizedString;
+ (BOOL)_invitationNotificationHasResourceChanges:(id)a0 changesString:(id *)a1;
+ (id)_invitationUpdatedTitleLocalizedString;
+ (id)_whenLocalizedString;
+ (id)_whereLocalizedString;
+ (id)defaultEventNotificationRepresentationWithTitle:(id)a0 message:(id)a1 notes:(id)a2;
+ (id)invitationNotificationRepresentationWithNotification:(id)a0 event:(id)a1 date:(id)a2 endDate:(id)a3 timeZone:(id)a4;
+ (id)previewForNotes:(id)a0;
+ (id)resourceChangeNotificationWithNotification:(id)a0 message:(id)a1 date:(id)a2 endDate:(id)a3 timeZone:(id)a4;
+ (id)responseNotificationWithTitle:(id)a0 message:(id)a1;
+ (id)timeToLeaveNotificationRepresentationWithHypothesisMessage:(id)a0 event:(id)a1 date:(id)a2 displayTimeZone:(id)a3;
+ (id)upcomingEventNotificationRepresentationWithEvent:(id)a0 date:(id)a1 displayTimeZone:(id)a2;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_setOwnerForContactDictionary:(id)a0;
- (id)dictionaryRepresentationsOfSupplementaryItems;
- (void)setOrganizerForContactDictionary:(id)a0;
- (void)updateUpcomingEventNotificationWithHypothesisMessage:(id)a0;

@end
