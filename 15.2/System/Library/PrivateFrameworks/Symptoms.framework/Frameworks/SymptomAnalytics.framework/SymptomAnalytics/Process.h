@class NSString, NSSet, NSDate, LiveUsage;

@interface Process : NSManagedObject

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSString *procName;
@property (copy, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) NSSet *hasLiveUsage;
@property (retain, nonatomic) LiveUsage *hintLiveUsage;

+ (id)entityName;
+ (id)fetchRequest;

@end
