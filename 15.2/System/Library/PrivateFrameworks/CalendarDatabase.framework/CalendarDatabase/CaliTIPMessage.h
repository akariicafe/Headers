@class ICSCalendar, NSString, ICSDocument, NSData, ICSEvent, NSArray, CalDAVScheduleChangesProperty;

@interface CaliTIPMessage : NSObject

@property (copy, nonatomic) NSData *data;
@property (retain, nonatomic) CalDAVScheduleChangesProperty *scheduleChanges;
@property (copy, nonatomic) NSString *filename;
@property (retain, nonatomic) ICSDocument *document;
@property (retain, nonatomic) ICSEvent *event;
@property (readonly, nonatomic) ICSCalendar *calendar;
@property (readonly, nonatomic) ICSEvent *masterEvent;
@property (readonly, nonatomic) NSArray *occurrences;
@property (readonly, nonatomic) NSArray *allOccurrences;
@property BOOL iMIPImported;

- (long long)compare:(id)a0;
- (id)initWithData:(id)a0 filename:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 filename:(id)a1 scheduleChanges:(id)a2;

@end
