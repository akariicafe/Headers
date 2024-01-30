@class CADObjectID;

@interface CADExpandedNotification : CADNotification

@property (retain, nonatomic) CADObjectID *attendeeObjectID;

- (BOOL)expanded;
- (void).cxx_destruct;
- (id)initWithType:(int)a0 objectID:(id)a1 occurrenceDate:(double)a2 expirationDate:(double)a3 attendeeObjectID:(id)a4;

@end
