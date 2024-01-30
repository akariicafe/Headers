@class EKObjectID, NSString;

@interface EKCalendarItemChange : EKObjectChange

@property (readonly, nonatomic) EKObjectID *calendarID;
@property (readonly, nonatomic) EKObjectID *oldCalendarID;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *oldExternalID;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL titleChanged;
@property (readonly, nonatomic) BOOL locationChanged;
@property (readonly, nonatomic) BOOL startDateChanged;
@property (readonly, nonatomic) BOOL startTimezoneChanged;
@property (readonly, nonatomic) BOOL endDateChanged;
@property (readonly, nonatomic) BOOL endTimezoneChanged;
@property (readonly, nonatomic) BOOL notesChanged;
@property (readonly, nonatomic) BOOL allDayChanged;
@property (readonly, nonatomic) BOOL suppressNotificationForChanges;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
