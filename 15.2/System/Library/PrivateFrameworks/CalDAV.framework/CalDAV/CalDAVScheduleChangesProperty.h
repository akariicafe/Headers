@class NSArray, NSMutableDictionary, NSString, CalDAVOccurrenceChange;

@interface CalDAVScheduleChangesProperty : NSObject

@property (retain, nonatomic) NSMutableDictionary *occurrenceChanges;
@property (readonly, nonatomic) BOOL isCancel;
@property (readonly, nonatomic) BOOL isReply;
@property (readonly, nonatomic) BOOL isUpdate;
@property (readonly, nonatomic) BOOL isCreate;
@property (readonly, nonatomic) NSArray *recurrenceIDs;
@property (retain, nonatomic) NSString *dateStamp;
@property (nonatomic) int actionType;
@property (retain, nonatomic) NSString *attendeeAddress;
@property (retain, nonatomic) CalDAVOccurrenceChange *masterChange;

+ (id)propertyWithItem:(id)a0;
+ (id)debugStringForType:(int)a0;

- (void).cxx_destruct;
- (id)init;
- (id)changeForOccurrence:(id)a0;
- (void)addOccurrenceChange:(id)a0;

@end
