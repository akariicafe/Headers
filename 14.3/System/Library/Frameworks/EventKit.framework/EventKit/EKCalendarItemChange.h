@class EKObjectID, NSString;

@interface EKCalendarItemChange : EKObjectChange

@property (readonly, nonatomic) EKObjectID *calendarID;
@property (readonly, nonatomic) EKObjectID *oldCalendarID;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *oldExternalID;
@property (readonly, nonatomic) BOOL titleChanged;
@property (readonly, nonatomic) BOOL locationChanged;
@property (readonly, nonatomic) BOOL startDateChanged;
@property (readonly, nonatomic) BOOL startTimezoneChanged;
@property (readonly, nonatomic) BOOL endDateChanged;
@property (readonly, nonatomic) BOOL endTimezoneChanged;
@property (readonly, nonatomic) BOOL notesChanged;
@property (readonly, nonatomic) BOOL allDayChanged;

+ (int)entityType;
+ (void)fetchCalendarItemChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchCalendarItemChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchCalendarItemChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
