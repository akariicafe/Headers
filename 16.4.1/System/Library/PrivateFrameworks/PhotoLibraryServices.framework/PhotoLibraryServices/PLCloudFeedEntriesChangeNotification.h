@class NSSet;

@interface PLCloudFeedEntriesChangeNotification : PLChangeNotification

@property (nonatomic) BOOL shouldReload;
@property (copy, nonatomic) NSSet *insertedEntries;
@property (copy, nonatomic) NSSet *updatedEntries;
@property (copy, nonatomic) NSSet *deletedEntries;

+ (id)notificationWithFullReload;
+ (id)notificationWithInsertedEntries:(id)a0 updatedEntries:(id)a1 deletedEntries:(id)a2;

- (id)object;
- (id)userInfo;
- (void).cxx_destruct;
- (id)name;
- (id)_initWithFullReload;
- (id)_initWithInsertedEntries:(id)a0 updatedEntries:(id)a1 deletedEntries:(id)a2;

@end
