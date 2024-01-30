@class NSArray;

@interface CALNNotificationRecordsDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *addedRecords;
@property (readonly, copy, nonatomic) NSArray *removedRecords;
@property (readonly, copy, nonatomic) NSArray *modifiedRecords;

+ (id)diffWithAddedRecords:(id)a0 removedRecords:(id)a1 modifiedRecords:(id)a2;
+ (id)emptyDiff;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAddedRecords:(id)a0 removedRecords:(id)a1 modifiedRecords:(id)a2;

@end
