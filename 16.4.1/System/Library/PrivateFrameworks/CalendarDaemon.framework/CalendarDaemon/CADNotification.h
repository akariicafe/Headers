@class CADObjectID, NSMutableArray, NSArray;

@interface CADNotification : NSObject

@property (retain, nonatomic) NSMutableArray *mutableExpandedNotifications;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) CADObjectID *objectID;
@property (readonly, nonatomic) double occurrenceDate;
@property (readonly, nonatomic) double expirationDate;
@property (readonly, nonatomic) BOOL expanded;
@property (readonly, nonatomic) NSArray *expandedNotifications;

- (void).cxx_destruct;
- (void)addExpandedNotification:(id)a0;
- (id)initWithType:(int)a0 objectID:(id)a1 occurrenceDate:(double)a2 expirationDate:(double)a3;

@end
