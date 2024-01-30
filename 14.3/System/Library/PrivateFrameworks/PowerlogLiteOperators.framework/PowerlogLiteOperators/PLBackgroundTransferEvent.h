@class NSString, NSMutableSet, NSDate;

@interface PLBackgroundTransferEvent : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSString *bundleID;
@property (retain) NSMutableSet *taskUUIDs;

- (void).cxx_destruct;
- (id)description;

@end
