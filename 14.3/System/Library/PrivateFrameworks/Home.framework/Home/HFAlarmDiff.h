@class NSSet;

@interface HFAlarmDiff : NSObject

@property (copy, nonatomic) NSSet *updatedAlarms;
@property (copy, nonatomic) NSSet *addedAlarms;
@property (copy, nonatomic) NSSet *deletedAlarms;
@property (copy, nonatomic) NSSet *unmodifiedAlarms;
@property (readonly, nonatomic) BOOL inputWasEqual;

+ (id)generateAlarmDiffFromSet:(id)a0 toSet:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
